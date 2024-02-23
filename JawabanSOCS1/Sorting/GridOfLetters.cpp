// Ivan Adrian 
// probH - Grid of Letters

#include<stdio.h>
#include<string.h>

int main(){
	int row, col;
	scanf("%d %d", &row, &col);
	getchar();
	
	char letters[255][255];
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			scanf("%s", letters[i]);
			getchar();
		}
	}
	
	char tempLetters[255];
		
	for(int i = 0; i < row; i++){
	    for(int j = 0; j < col; j++){
			if(strcmp(letters[i], letters[j]) < 0){
				strcpy(tempLetters, letters[i]);
				strcpy(letters[i], letters[j]);
				strcpy(letters[j], tempLetters);
			}
		}
	}	
	
	for(int i = 0; i < row; i++){
		printf("%s\n", letters[i]);
	}
	
	return 0;
}
