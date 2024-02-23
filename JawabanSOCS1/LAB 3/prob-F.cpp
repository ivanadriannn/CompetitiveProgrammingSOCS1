#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	
	for(int i = 1; i <= t; i++){
		int a, b;
		scanf("%d %d", &a, &b);
		getchar();
		if(a > b && a != b){
			printf("Case #%d: Go-Jo\n", i);
		}
		else if(a < b && a != b){
			printf("Case #%d: Bi-Pay\n", i);
		}
	}
	
	return 0;
}
