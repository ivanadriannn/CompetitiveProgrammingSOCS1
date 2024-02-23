#include<stdio.h>

int main(){
	long long int tc;
	scanf("%lld", &tc);
	getchar();
	
	long long int day;
	long long int count[255];
	count[0] = 0;
	count[1] = 1;
	
	for(int i = 0; i < tc; i++){
		scanf("%lld", &day);
		getchar();
		
		for(int j = 2; j < day; j++){
			count[j] = count[j-2] + count[j-1];
		}
		
		printf("Case #%d: %lld\n", i+1, count[day-1]);
		
	}
	
	return 0;
}
