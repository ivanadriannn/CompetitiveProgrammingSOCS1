#include<stdio.h>

int main(){
	int tc;
	long long int boxAmount;
	long long int coinValue[105000], totalValue = 0;
	
	scanf("%d", &tc);
	getchar();
	
	for(int i = 1; i <= tc; i++){
		scanf("%lld", &boxAmount);
		getchar();
		
		for(int j = 0; j < boxAmount; j++){
			scanf("%lld", &coinValue[j]);
			getchar();
		}
		
		
		long long int maxValue1 = -1000005, maxValue2 = -1000005;
		
		for(int j = 0; j < boxAmount; j++){
			if(coinValue[j] > maxValue1){
				maxValue2 = maxValue1;
				maxValue1 = coinValue[j];
			}
			else if(coinValue[j] > maxValue2){
				maxValue2 = coinValue[j];
			}
		}
        
        totalValue = maxValue1 + maxValue2;
    	printf("Case #%d: %lld\n", i, totalValue);
    	totalValue = 0;
	}
	
	return 0;
}
