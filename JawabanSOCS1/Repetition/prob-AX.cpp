#include<stdio.h>

int main(){
	long long int n;
	scanf("%lld", &n);
	getchar();
	
	long long int number[n+1];
	long long int max = 0;
	
	for(int i = 0; i < n; i++){
		scanf("%lld", &number[i]);
		getchar();
 	
		if(number[i] > 0){
			max += number[i];
		}
	}
	
	printf("%lld\n", max);
	
	return 0;
}
