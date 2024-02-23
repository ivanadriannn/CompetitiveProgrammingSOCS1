#include<stdio.h>

int main(){
	FILE *ab;
	ab = fopen("testdata.in", "r");
	
	int a, b;
	fscanf(ab, "%d %d", &a, &b);
	
	int calculationResult = a + b;
	
	printf("%d\n", calculationResult);
	
	fclose(ab);
	
	return 0;
}
