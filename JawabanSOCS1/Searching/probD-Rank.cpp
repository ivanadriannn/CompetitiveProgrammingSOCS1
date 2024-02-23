#include<stdio.h>
#include<string.h>

int tempValue;
char tempName[20];

void sortingProcess(int studentAmount, char name[1001][25], int value[]){
	for(int i = 0; i < studentAmount; i++){
	    for(int j = 0; j < (studentAmount - 1); j++){
	    	if(value[j + 1] > value[j]){
	    		// sort the value of the students
	    		tempValue = value[j + 1];
	    		value[j + 1] = value[j];
	    		value[j] = tempValue;
	    		
	    		// sort the name of the students
	    		strcpy(tempName, name[j + 1]);
	        	strcpy(name[j + 1], name[j]);
	        	strcpy(name[j], tempName);
			}
		} 			
	}
}

void sameValue(int studentAmount, char name[1001][25], int value[]){
	// sort by the lexagraphical order process
	for(int i = 0; i < studentAmount; i++){
	    for(int j = 0; j < (studentAmount - 1); j++){
	    	if(value[j + 1] == value[j]){
				if(strcmp(name[j + 1], name[j]) < 0){
					strcpy(tempName, name[j + 1]);
					strcpy(name[j + 1], name[j]);
					strcpy(name[j], tempName);
				}
			}
		}
	}	
}

int rank(int studentAmount, char name[1001][25], char askingStudent[1001]){
	for(int j = 0; j < studentAmount; j++){
		if(strcmp(askingStudent, name[j]) == 0){
			return j + 1;
		}
	}
}

int main(){
	int tc;
	scanf("%d", &tc);
	getchar();
	
	for(int i = 1; i <= tc; i++){
		int studentAmount;
		scanf("%d", &studentAmount);
		getchar();
		
		char name[studentAmount+1][25];
		int value[studentAmount+1];
		
		for(int j = 0; j < studentAmount; j++){
			scanf(" %[^#]#%d", name[j], &value[j]);
			getchar();
		}
		
		char askingStudent[1001];
	    scanf("%s", askingStudent);
	    getchar();
	    
	    sortingProcess(studentAmount, name, value);
	    sameValue(studentAmount, name, value);
	    
	    int rankPosition = rank(studentAmount, name, askingStudent);
	    printf("Case #%d: %d\n", i, rankPosition);
	}
	
	return 0;
}

//2
//3
//Jojo#40
//Lili#80
//Bibi#90
//Lili 
//3
//Jojo#100
//Lili#80
//Bibi#90
//Lili
