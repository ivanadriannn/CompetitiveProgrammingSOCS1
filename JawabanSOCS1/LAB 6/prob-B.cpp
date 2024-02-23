#include<stdio.h>

void matrixChecking(int numbers[], int matrixSize){
	int sameAmount = 0;
	
	for(int i = 0; i < matrixSize; i++){
		for(int j = i + 1; j < matrixSize; j++){
			if(numbers[i] == numbers[j]){
				sameAmount = 1;
			}
		}
	}
	
	if(sameAmount >= 1){
		printf("Nay\n");
	}
	else{
		printf("Yay\n");
	}
	
}

int main(){
	int size;
	int inputNumber[200];
	
	scanf("%d", &size);
	getchar();
	
	for(int i = 0; i < size; i++){
	    for(int j = 0; j < size; j++){
    		scanf("%d", &inputNumber[i]);
    		getchar();
	    }
	}
	
	matrixChecking(inputNumber, size);
	
	return 0;
}
