#include<stdio.h>

int main(){
	int tc, a, b;
	scanf("%d", &tc);
	getchar();
	
	for(int i = 1; i <= tc; i++){
		scanf("%d %d", &a, &b);
		getchar();
		int bitshiftOperation = (a/b) << b;
		printf("%d\n", bitshiftOperation);
	}
	
	return 0;
}
