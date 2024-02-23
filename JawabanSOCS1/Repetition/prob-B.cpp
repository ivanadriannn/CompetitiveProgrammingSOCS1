#include<stdio.h>

int main(){
	int start, amount;
	scanf("%d %d", &start, &amount);
	getchar();
	
	for(int i = start; i < (start + amount); i++){
		printf("%d\n", i);
	}
	
	return 0;
}
