#include<stdio.h>

#define MOD 1000000007

long long int faktorial(int n){
	long long int result = 1;
	for(int i = 2; i <= n; i++){
		result = (result * i) % MOD;
  	}
  	return result;
}

int main(){
	int tc, n, aN[150];
	scanf("%d", &tc); 
	getchar();
  
  	for(int i = 1; i <= tc; i++){
    	scanf("%d", &n);
    	getchar();
    
    long long int result = 1;
    
    for(int j = 1; j <= n; j++){
      	scanf("%d", &aN[j]);  
     	 getchar();
    }
    
    for(int j = 1; j <= n; j++){
      	result = (result * faktorial(aN[j])) % MOD;
    }
    
    printf("Case #%d: %lld\n", i, result); 
    
  }
  
  return 0;
}
