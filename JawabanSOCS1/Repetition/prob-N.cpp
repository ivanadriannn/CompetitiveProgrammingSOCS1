// Ivan Adrian - 2602076323
// ProbN Thai Tea

#include<stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	getchar();
	
	int buy, change;
	
	for(int i = 1; i <= tc; i++){
		scanf("%d %d", &buy, &change);
		getchar();
		
		int total = 0;
		total += buy;
		
		while(buy >= change){
			buy = buy - change + 1;
			total += 1;	
		}
		
		printf("Case #%d: %d\n", i, total);
		
	}
	
	return 0;
}

