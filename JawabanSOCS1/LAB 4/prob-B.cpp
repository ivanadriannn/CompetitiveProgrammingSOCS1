#include<stdio.h>

int main(){
	long int tc;
	long int foodAmount = 0, restMoney = 0;
	long int priceperItem[1001];
	
	scanf("%ld", &tc);
	getchar();
	
	for(long int i = 1; i <= tc; i++){
		scanf("%ld %ld", &foodAmount, &restMoney);
		getchar();
		long int len = foodAmount;
		long int totalPrice = 0;
		for(long int j = 0; j < len; j++){
			scanf("%ld", &priceperItem[j]);
			getchar();
			totalPrice += priceperItem[j];
		}
		
		if(totalPrice <= restMoney){
			printf("Case #%ld: No worries", i);
		}
		else if(totalPrice > restMoney){
			printf("Case #%ld: Wash dishes", i);
		}
		printf("\n");
	}
	
	return 0;
}
