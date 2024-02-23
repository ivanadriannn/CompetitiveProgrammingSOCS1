#include<stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	getchar();
	
	for(int i = 0; i < tc; i++){
		long long int decimal;
		int position;
		
		scanf("%lld %d", &decimal, &position);
		getchar();
		
		int bitP[255];
		for(int j = 0; decimal > 0; j++){
			bitP[j] = decimal % 2;
			decimal /= 2;
 		}
 		  
		printf("%d\n", bitP[position]);    
	}
	
	return 0;
}
