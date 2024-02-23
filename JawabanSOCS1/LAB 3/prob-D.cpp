#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	
	for(int i = 1; i <= t; i++){
		long int n, m;
		scanf("%ld %ld", &n, &m);
		getchar();
		if(n % 2 == 1 && m % 2 == 1){
			printf("Case #%d: Need more frogs\n", i);
		}
		else{
			printf("Case #%d: Party time!\n", i);
		}
	}
	
	return 0;
}
