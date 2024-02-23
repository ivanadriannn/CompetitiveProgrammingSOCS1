#include<stdio.h>

int main(){
	int size;
	scanf("%d", &size);
	getchar();
	
	int index[size+1];
	int number[size+1];
	int number2[size+1];
	
	for(int i = 0; i < size; i++){
		scanf("%d", &index[i]);
		getchar();
	}
	
	for(int i = 0; i < size; i++){
		scanf("%d", &number[i]);
		getchar();
	}
	
	for(int i = 0; i < size; i++){
		number2[index[i]] = number[i];
	}
	
	for(int i = 0; i < size; i++){
		if(i > 0){
			printf(" %d", number2[i]);
		}
		else if(i == 0){
			printf("%d", number2[i]);
		}
	}
	
	puts("");
	
	return 0; 
}
