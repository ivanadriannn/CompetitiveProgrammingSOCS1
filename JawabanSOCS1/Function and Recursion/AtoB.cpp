#include<stdio.h>

// Ivan Adrian - 2602076323

void checking(int tc, int a, int b){
    for(int i = 1; i <= tc; i++){
		scanf("%d %d", &a, &b);
		getchar();
		
		while(a > 1 && a != b){
		    if(a % 2 == 0){
		        a = a/2;
		    }
		    else{
		        a = (a*3) + 1;
		    }
		}
		
		if(a == b){
		    printf("Case #%d: YES\n", i);
		}
		else{
		    printf("Case #%d: NO\n", i);
		}
	}
}

int main(){
	int tc, a, b;
	scanf("%d", &tc);
	getchar();
	
	checking(tc, a, b);
	
	return 0;
}
