// Ivan Adrian - 2602076323
// ProbAU - Colorful Alphabet

#include<stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	getchar();
	
	for(int i = 1; i <= tc;i++){
		
		int number;
		scanf("%d", &number);
		getchar();
		
		number = number + 96;
		
		printf("Case #%d: ", i);
		
		for(int j = 97; j <= number;j++){
			printf("%c", j);
		}
		
		printf("\n");
		
	}
	
	return 0;
}
