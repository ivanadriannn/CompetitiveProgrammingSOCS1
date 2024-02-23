// Ivan Adrian - 2602076323
#include<stdio.h>

int main(){
	
	int length;
	char sentence[255];
	
	for(int i = 0; i < 3; i++){
		scanf("%d %s", &length, sentence);
		getchar();
		printf("%c%c\n", sentence[length-1], sentence[0]);
	} 
	
	return 0;
}
