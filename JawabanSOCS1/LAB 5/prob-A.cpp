#include<stdio.h>

int main(){
	int n, updatedCatalog, item;
	long long int currentPrice[200], updatedPrice;
	scanf("%d", &n);
	getchar();
	

	for(int i = 1; i <= n; i++){
    	scanf("%lld", &currentPrice[i]);
    	getchar();
	}
	    
	scanf("%d", &updatedCatalog);
	getchar();
		
	for(int i = 1; i <= updatedCatalog; i++){
		scanf("%d %lld", &item, &updatedPrice);
		getchar();
		currentPrice[item] = updatedPrice;
			
		printf("Case #%d: ", i);
		
		for(int j = 1; j <= n; j++){
			if(j > 1){
				printf(" ");
			}
			printf("%lld", currentPrice[j]);
		}
		printf("\n");
	}
		
	return 0;
	
}
