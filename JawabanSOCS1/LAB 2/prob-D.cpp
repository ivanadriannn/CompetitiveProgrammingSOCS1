#include<stdio.h>

int main(){
	char n1, n2, n3;
	char n4, n5, n6;
	char n7, n8, n9;

	scanf("%c%c%c", &n1, &n2, &n3);
	getchar();
	scanf("%c%c%c", &n4, &n5, &n6);
	getchar();
	scanf("%c%c%c", &n7, &n8, &n9);
	getchar();
	
	printf("%c\n", n2);
	printf("%c\n", n5);
	printf("%c\n", n8);
	
	return 0;
}
