#include<stdio.h>

int main(){
	int size;
	scanf("%d", &size);
	getchar();
	
	for(int i = 0; i < size; i++){
		for(int j = 0; j < size; j++){
			printf("*");
		}
		puts("");
	}
	
	return 0;
}
