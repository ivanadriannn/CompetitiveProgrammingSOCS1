// Ivan Adrian - 260206323
// ProbAV More Addition

#include<stdio.h>

int main(){
	int number;
	scanf("%d", &number);
	getchar();
	
	int variationTotal = 0;
	
	for(int i = 0; i <= number; i++){
		for(int j = 0; j <= number; j++){
			if((number - i - j) >= 0){
				variationTotal = variationTotal + 1;
			}
		}
	}
	
	printf("%d\n", variationTotal);
	
	return 0;
}
