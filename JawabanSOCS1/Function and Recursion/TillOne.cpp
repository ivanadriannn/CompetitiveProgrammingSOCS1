// Ivan Adrian - 2602076323
#include<stdio.h>
 
long long int findN(long long int n)
{
    if(n == 1){
        return 1;
    }
    else if(n % 2 == 0){
        return findN(n / 2);
    }
    else if(n % 2 == 1){
        return findN(n - 1) + findN(n + 1);
    }
}
 
int main(){
	int tc;
	scanf("%d", &tc);
	getchar();
	
	long long int n;
	for(int i = 0; i < tc; i++){
		scanf("%lld", &n);
		getchar();
		printf("Case #%d: %lld\n", (i + 1), findN(n));
	}
 
    return 0;
}
