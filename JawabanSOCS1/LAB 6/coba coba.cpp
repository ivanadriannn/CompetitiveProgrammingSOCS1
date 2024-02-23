#include<stdio.h>

int main(){
	int tc;
	long long int x, y, z;
	scanf("%d", &tc);
	getchar();
	
	for(int i = 0; i < tc; i++){
		scanf("%lld %lld %lld", &x, &y, &z);
		getchar();
		if(y >= x && y <= z && x + y > c){
	    	printf("BISA\n");
		}
		else{
		    printf("TIDAK BISA\n");
		}
	}
	
	return 0;
}



