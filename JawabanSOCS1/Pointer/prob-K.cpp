#include<stdio.h>
#include<string.h>

int main(){
	int tc;
	scanf("%d", &tc);
	getchar();
	
	char string[1001];
	
	for(int i = 0; i < tc; i++){
		scanf("%s", string);
		getchar();
		
		int length = strlen(string);
		
		printf("Case #%d : ", i+1);
		for(int j = length-1; j >= 0; j--){
			printf("%c", string[j]);
		}
		puts("");
	}
	return 0;
}
