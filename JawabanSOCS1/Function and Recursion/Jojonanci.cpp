#include<stdio.h>

long long int x, y;

long long int jojonanci(int tc){
	if(tc == 0){
		return x;
	}
	else if(tc == 1){
		return y;
	}
	else{
		long long int calculation;
		calculation = jojonanci(tc - 1)-jojonanci(tc - 2);
		return calculation;
	}
}


int main(){
	int tc;
	scanf("%d", &tc);
	getchar();
	
	int n;
	for(int i = 0; i < tc; i++){
		scanf("%d %lld %lld", &n, &x, &y);
		getchar();

		printf("Case #%d: %lld\n", (i + 1), jojonanci(n));
	}
}
