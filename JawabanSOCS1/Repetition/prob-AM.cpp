#include<stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	getchar();
	
	int readAmount;
	
	for(int i = 1; i <= tc; i++){
		scanf("%d", &readAmount);
		getchar();
		
		printf("Case #%d:\n", i);
		for(int j = 1; j <= readAmount; j++){
			if((j % 3 == 0 || j % 5 == 0) && j % 15 != 0){
				printf("%d Jojo\n", j);
			}
			else{
				printf("%d Lili\n", j);
			}
		}
	
	}
	
	return 0;
}
