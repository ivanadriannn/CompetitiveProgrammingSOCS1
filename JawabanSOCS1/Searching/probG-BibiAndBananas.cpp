#include<stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	getchar();
	
	long long int banana, minBanana, bananaWeight[10000];
	
	for(int i = 0; i < tc; i++){
		int count = 0;
		
		scanf("%lld %lld", &banana, &minBanana);
		getchar();
		
		for(int j = 0; j < banana; j++){
			scanf("%lld", &bananaWeight[j]);
			getchar();
			
			if(bananaWeight[j] >= minBanana){
				count += 1;
			}
		}
		
		printf("Case #%d: %d\n", i+1, count);
		
	}
	
	return 0;
}
