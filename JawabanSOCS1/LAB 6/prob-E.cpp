#include<stdio.h>

// Ivan Adrian - 2602076323

void triangle(long long int a, long long int b, long long int c){
	
	if(a<=b<=c && a + b > c){
	    printf("BISA\n");
	}
	else{
	    printf("TIDAK BISA\n");
	}
	
}

int main(){
	int tc;
	long long int x, y, z;
	scanf("%d", &tc);
	getchar();
	
	for(int i = 0; i < tc; i++){
		scanf("%lld %lld %lld", &x, &y, &z);
		getchar();
		triangle(x, y, z);
	}
	
	return 0;
}



