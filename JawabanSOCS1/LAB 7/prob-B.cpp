// Ivan Adrian - 2602076323
#include<stdio.h>

int main(){
	int tc;
	
	scanf("%d", &tc);
	getchar();
	
	char picture[255][255] = {0};
	
	for(int i = 0; i < tc; i++){
	    scanf("%s", picture[i]);
	    getchar();
	}
	
	for(int i = tc - 1; i >= 0; i--){
		for(int j = tc - 1; j >= 0; j--){
			printf("%c", picture[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

