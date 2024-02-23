#include<stdio.h>

int main()
{
	int n;
	int m;
	int i;
	scanf("%d %d", &n, &m);
	for(i = n; i < m + n; i++)
	{
		printf("%d\n", i);
	}
	return 0;
}
