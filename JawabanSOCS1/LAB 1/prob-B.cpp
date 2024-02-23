#include<stdio.h>

int main(){
	double l, b, h;
	scanf("%lf %lf %lf", &l, &b, &h);
	getchar();
	
	double surfaceArea = (2 * ((b * h) / 2) + (3 * b * l));
	printf("%.3lf\n", surfaceArea);
	
	return 0;
}
