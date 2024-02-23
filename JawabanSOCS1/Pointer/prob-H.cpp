#include<stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	getchar();
	
	long long int winMap[255][255];
	
	for(int i = 0; i < tc; i++){
		int size;
		scanf("%d", &size);
		getchar();
		
		for(int j = 0; j < size; j++){
			for(int k = 0; k < size; k++){
				scanf("%lld", &winMap[j][k]);
				getchar();
			}
		}
		
		long long int sum = 0;
		printf("Case #%d:", i+1);
		for(int j = 0; j < size; j++){
			for(int k = 0; k < size; k++){
				sum += winMap[k][j];
			}
			printf(" %lld", sum);
			sum = 0;
		}
		printf("\n");
	}
	
	return 0;
}
