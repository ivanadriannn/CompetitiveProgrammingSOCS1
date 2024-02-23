#include<stdio.h>

int main(){
	FILE *game;
	
	game = fopen("testdata.in", "r");
	
	int tc;
	fscanf(game, "%d\n", &tc);
	
	for(int i = 0; i < tc; i++){
		
		char stringX[255];
		fscanf(game, "%[^\n]\n", stringX);
		
		int processNum;
		fscanf(game, "%d\n", &processNum);
		
		char chA, chB;
		int changedStringX[255] = {0};
		int differentChar[255] = {0};
		
		for(int j = 0; j < processNum; j++){
			fscanf(game, "%c %c\n", &chA, &chB);
			
			if(!changedStringX[chA - 65]){
				
				changedStringX[chA - 65] = 1;
				
				for(int k = 0; stringX[k] != '\0'; k++){
					if(stringX[k] == chA){
						stringX[k] = chB;
					}
				}
				
			}
		}
		
		for(int j = 0; stringX[j] != '\0'; j++){
			differentChar[stringX[j] - 65]+=1;
		}
		
		for(int j = 0; j < 26; j++){
			if(differentChar[j] != 0){
				printf("%c %d\n", (65 + j), differentChar[j]);
			}
		}
	}
	
	fclose(game);
	
	return 0;	
}

