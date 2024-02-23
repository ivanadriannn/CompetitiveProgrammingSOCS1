// Ivan Adrian - 2602076323
// ProbJ Items

#include<stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	getchar();
	
	int n;
	long long int itemAmount;
	
	for(int i = 0; i < tc; i++){
		scanf("%d", &n);
		getchar();
		
		long long int totalItem = 0;
		
		for(int j = 0; j < n; j++){
			scanf("%lld", &itemAmount);
			getchar();
			totalItem += itemAmount;
		}
		
		printf("Case #%d: %lld\n", i+1, totalItem);
		
	}
	
	return 0;
}
