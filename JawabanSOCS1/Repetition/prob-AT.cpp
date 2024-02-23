// Ivan Adrian - 2602076323
// ProbAT - Jojo Draw Triangles

#include<stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	
	for(int i = 1; i <= tc; i++){
		int leg;
		scanf("%d", &leg);
		
		for(int j = 1; j <= leg; j++){
			for(int k = 1; k <= leg-j; k++){
				printf(" ");
			}
			for(int l = 1; l <= (2*j) - 1; l++){
				printf("*");
			}
			printf("\n");
		}
	}
		
	return 0;
}
