#include<stdio.h>
#include<string.h>

void checking(int i, int tc1, int counter, char friendsName[255][255], char plantName[255][255], char checkName[255][255]){
	for(int j = 1; j <= tc1; j++){
		if(strcmp(checkName[i], friendsName[j]) == 0){
			printf("Case #%d: %s\n", i, plantName[j]);
			break;
		}
		else if(checkName[i] != friendsName[j]){
			counter = counter + 1;
		}
				
		if(counter == tc1){
			printf("Case #%d: N/A\n", i);
		}	
	}
}

int main(){
	FILE *plantingTree;
	plantingTree = fopen("testdata.in", "r");
	
	int tc1;
	fscanf(plantingTree, "%d\n", &tc1);
	
	char friendsName[255][255];
	char plantName[255][255];
	
	for(int i = 1; i <= tc1; i++){
		fscanf(plantingTree, "%[^#]#%[^\n]", friendsName[i], plantName[i]);
		fgetc(plantingTree);
	}
	
	int tc2;
	fscanf(plantingTree, "%d\n", &tc2);
	
	for(int i = 1; i <= tc2; i++){
		char checkName[255][255];
		fscanf(plantingTree, "%[^\n]", checkName[i]);
		fgetc(plantingTree);
		int counter = 0;
		checking(i, tc1, counter, friendsName, plantName, checkName);
	}
	
	fclose(plantingTree);
	
	return 0;
}
