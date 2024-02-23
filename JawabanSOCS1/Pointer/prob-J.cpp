#include<stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	getchar();
	
	for(int i = 0; i < tc; i++){
		char string[10001];
		scanf("%s", string);
		getchar();
		
		printf("Case %d:", i+1);
		for(int j = 0; string[j] != '\0'; j++){
			int convert = string[j];
			if(j > 0){
			 	printf("-%d", convert);
			}
			else{
				printf(" %d", convert);
			}
			convert = 0;
		}
		puts("");
	}
	return 0;
}
