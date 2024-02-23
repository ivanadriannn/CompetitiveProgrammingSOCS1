#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	
	for(int i = 1; i <= t; i++){
		double p, n;
		scanf("%lf %lf", &p, &n);
		getchar();
		double percentageResult;
		percentageResult = (p/100) * n;
		printf("%.2lf\n", percentageResult);
	}
	
	return 0;
}
