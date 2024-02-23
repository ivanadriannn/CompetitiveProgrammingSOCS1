#include<stdio.h>

int main(){
	long int n, button;
	long int bonusPoint = 0, totalPoint = 0;
	
	scanf("%ld", &n);
	getchar();
	
	for(int i = 1; i <= n; i++){
		button = 100 + bonusPoint;
		bonusPoint+=50;
		totalPoint+=button;
	}
	
	printf("%ld\n", totalPoint);
	
	return 0;
}


