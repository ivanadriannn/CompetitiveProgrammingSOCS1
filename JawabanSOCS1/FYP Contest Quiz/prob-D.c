#include<stdio.h>

int main()
{
	long int a, b, i;
	scanf("%ld %ld", &a, &b);
	long int sum = 0;
	for(i = a; i <= b; i++)
	{
		sum = sum + a;
		a = a + 1;
	}
	printf("%ld\n", sum);
	return 0;
}

