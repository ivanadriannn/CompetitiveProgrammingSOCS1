#include<stdio.h>

int main(){
	int tc;
	
	scanf("%d", &tc);
	getchar();
	
	long long int cutAmount;
	
	for(int i = 1; i <= tc; i++){
		scanf("%lld", &cutAmount);
		getchar();
		
		long long int maxPieces = 1;
		
		printf("Case %d: ", i);
		for(int j = 0; j < cutAmount; j++){
			maxPieces = maxPieces + j;
			if(j > 0){
			    printf(" ");
			}
			printf("%lld", maxPieces);
		}
		printf("\n");
	}
	
	return 0;
}
