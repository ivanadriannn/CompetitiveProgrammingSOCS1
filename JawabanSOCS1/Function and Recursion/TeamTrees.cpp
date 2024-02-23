#include<stdio.h>

long long int countTrees(int day){
	
	long long int trees;
	long long int totalTrees = 0;
	
	for(int j = 0; j < day; j++){
		scanf("%lld", &trees);
		getchar();
		totalTrees += trees;
	}
	
	return totalTrees;
}

int main(){
	int tc;
	scanf("%d", &tc);
	getchar();
	
	for(int i = 0; i < tc; i++){
		
		int day;
		scanf("%d", &day);
		getchar();
		
		printf("Case #%d: %lld\n", (i + 1), countTrees(day));
	}
	
	return 0;
}
