#include<stdio.h>

int main(){
	int size, k;
	scanf("%d %d", &size, &k);
	getchar();
	
	char square[255][255];
	
	for(int i = 1; i <= size; i++){
		for(int j = 1; j <= size; j++){
			printf("#");
		}
		puts("");	
	}
	
	printf("\n");
	
	for(int i = 1; i <= size; i++){
		for(int j = 1; j <= size; j++){
			if(i % k == 0){
				printf("#");
			}
			else{
				printf(".");
			}
		}
		puts("");	
	}
	
	printf("\n");
	
	for(int i = 1; i <= size; i++){
		for(int j = 1; j <= size; j++){
			if(j % k == 0){
				printf("#");
			}
			else{
				printf(".");
			}
		}
		puts("");	
	}
	
	return 0;
}
