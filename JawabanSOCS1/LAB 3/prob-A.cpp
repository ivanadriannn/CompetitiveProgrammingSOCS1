#include<stdio.h>

int main(){
	int n, k;
	int currentPosition = 0, lastPosition = 0;
	scanf("%d", &n);
	getchar();
	
	for(int i = 0; i < n; i++){
		scanf("%d", &k);
		getchar();
		currentPosition = k*1;
		lastPosition+=currentPosition;
		
		if(lastPosition == 9){
			lastPosition = 21;
		}
		else if(lastPosition == 33){
			lastPosition = 42;
		}
		else if(lastPosition == 76){
			lastPosition = 92;
		}
		else if(lastPosition == 53){
			lastPosition = 37;
		}
		else if(lastPosition == 80){
			lastPosition = 59;
		}
		else if(lastPosition == 97){
			lastPosition = 88;
		}
	}
	
	printf("%d\n", lastPosition);
	
	return 0;
			
}
