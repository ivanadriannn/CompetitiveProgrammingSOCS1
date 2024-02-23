#include<stdio.h>
#include<string.h>

int main(){
	int tc;
	scanf("%d", &tc);
	getchar();
	
	char message[1002];
	
	for(int i = 0; i < tc; i++){
		scanf("%s", &message);
		getchar();
		
		printf("Case #%d:\n", i+1);
		
		for(int j = 0; j < strlen(message); j++){
			if(message[j] >= 'A' && message[j] <= 'D'){
				printf("A");
			}
			else if(message[j] >= 'E' && message[j] <= 'H'){
				printf("E");
			}
			else if(message[j] >= 'I' && message[j] <= 'N'){
				printf("I");
			}
			else if(message[j] >= 'O' && message[j] <='T'){
				printf("O");
			}
			else if(message[j] >= 'U' && message[j] <= 'Z'){
				printf("U");
			}
		}
		
		puts(" ");
		
		for(int j = 0; j < strlen(message); j++){
			if(message[j] == 'A' || message[j] == 'E' || message[j] == 'I' || message[j] == 'O' || message[j] == 'U'){
				printf("0");
			}
			else if(message[j] == 'B'|| message[j] =='F' || message[j] == 'J'|| message[j]== 'P' || message[j] == 'V'){
				printf("1");
			}
			else if(message[j] == 'C'|| message[j] == 'G' || message[j] == 'K' || message[j] == 'Q' || message[j] == 'W'){
				printf("2");
			}
			else if(message[j] == 'D' || message[j] == 'H' || message[j] == 'L' || message[j] == 'R' || message[j] == 'X'){
				printf("3");
			}
			else if(message[j] =='M'|| message[j] == 'S'|| message[j] == 'Y'){
				printf("4");
			}
			else if(message[j] =='N' || message[j] == 'T' || message[j] == 'Z'){
				printf("5");
			}
		}
		
		puts(" ");
		
	}
	
	return 0;
}
