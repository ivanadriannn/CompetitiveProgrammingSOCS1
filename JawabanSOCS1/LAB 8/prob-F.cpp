#include<stdio.h>

int callAmount;

int fibonacci(int n){
	callAmount += 1;
	if(n == 0)
	{
		return 0;
	}
	else if(n == 1)
	{
		return 1;
	}
	else if(n > 1)
	{
		return fibonacci(n - 1) + fibonacci(n - 2); 
	}
}


int main(){
	int tc; 
	int n;
	
	scanf("%d", &tc);
	getchar();
	
	for(int i = 1; i <= tc; i++){
		
	    callAmount = 0;
		scanf("%d", &n);
		getchar();
	
	    fibonacci(n);
	    
	    printf("Case #%d: %d\n", i, callAmount);
	    
	}
	
	return 0;
}
