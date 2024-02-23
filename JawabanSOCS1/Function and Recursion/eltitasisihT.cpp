#include<stdio.h>
#include<string.h>

void reverse(char str[1050], int index){
	if(index < 0){
		return;
	}
	printf("%c", str[index]);
	reverse(str, index-1);
}

int main(){
	int tc;
	scanf("%d", &tc);
	getchar();
	
	char string[1050];
	
	for(int i = 0; i < tc; i++){
		scanf("%[^\n]", string);
		getchar();
		printf("Case #%d: ", i+1);
		reverse(string, strlen(string)-1);
		puts("");
	}
	
	return 0;
}
