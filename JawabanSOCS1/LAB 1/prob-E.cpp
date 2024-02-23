#include<stdio.h>

int main(){
	long int a, b, c;
	scanf("%ld", &a);
	getchar();
	
	b = a + a;
	c = b - 1;
	
	printf("%ld plus %d is %ld\n", a, a, b);
	printf("minus one is %ld\n", c);
	
	return 0;
}
