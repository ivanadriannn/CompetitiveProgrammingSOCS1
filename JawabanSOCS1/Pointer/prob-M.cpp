#include<stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	getchar();
	
	for(int i = 0; i < tc; i++){
		int size;
		scanf("%d", &size);
		getchar();
		
		int number[size+1][size+1];
		
		for(int j = 0; j < size; j++){
			for(int k = 0; k < size; k++){
				scanf("%d", &number[j][k]);
				getchar();
			}
		}
		
		int sum = 0;
		printf("Case #%d:", i+1);
		for(int j = 0; j < size; j++){
			for(int k = 0; k < size; k++){
				sum += number[k][j];
			}
			printf(" %d", sum);
			sum = 0;
		}
		printf("\n");
	}
	
	return 0;
}
