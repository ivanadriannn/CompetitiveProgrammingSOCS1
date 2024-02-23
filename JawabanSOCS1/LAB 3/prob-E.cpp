#include<stdio.h>

int main(){
	int n, k;
	int lastPosition = 0, finalPosition = 0;
	scanf("%d", &n);
	getchar();
	
	for(int i = 0; i < n; i++){
		scanf("%d", &k);
		getchar();
		lastPosition = k;
		finalPosition += lastPosition;
		
		if(finalPosition == 30){
			finalPosition = 10;
		}
		else if(finalPosition == 12){
			finalPosition = 28;
		}
		else if(finalPosition == 35){
			finalPosition = 7;
		}
		else if(finalPosition >= 40){
			finalPosition -= 40;
		}
	}
	
	
	printf("%d\n", finalPosition);
	
	return 0;
			
}
