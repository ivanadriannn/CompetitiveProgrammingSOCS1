#include<stdio.h>

int main(){
	int tc;
	
	scanf("%d", &tc);
	getchar();
	
	long long int candy;
	long long int money;
	long long int price[15000];
	
	for(int i = 0; i < tc; i++){
		scanf("%lld %lld", &candy, &money); 
		getchar();
		
		for(int j = 0; j < candy;j++){
			scanf("%lld", &price[j]); 
			getchar();
		}
		
		for(int j = 1; j < candy ; j++){
			if(price[0] > price[j]){
				price[0] = price[j];
			}
		}
		
		long long int candyAmount;
		
		candyAmount = (price[0] < money)? money/price[0] : 0;

		printf("Case #%d: %lld\n", (i + 1), candyAmount);
	}

	return 0;
}
