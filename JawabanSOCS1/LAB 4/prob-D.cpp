#include<stdio.h>

int main(){
	int totalN = 1, processNumber;
	scanf("%d", &processNumber);
	getchar();
	
	for(int i = 1; i <= processNumber; i++){
		totalN = (totalN * 2) + 1;
	}
	
	printf("%d\n", totalN);
	
	return 0;
}
