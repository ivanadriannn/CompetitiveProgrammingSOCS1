#include<stdio.h>
#include<string.h>

char string[1001];
int stringLength = 0;

void removeVowel(char string[]){
   stringLength = strlen(string);
   
   for(int j = 0; j < stringLength; j++){
   	
      if(string[j] == 'a' || string[j] == 'e' || string[j] == 'i' || string[j] == 'o' || string[j] == 'u' ||
	  	 string[j] == 'A' || string[j] == 'E' || string[j] == 'I' || string[j] == 'O' || string[j] == 'U'){
	  	 	
         for(int k = j; k < stringLength; k++){
            string[k] = string[k + 1];
         }
         
         j = j - 1;
         stringLength = stringLength - 1;
         
      }
      string[stringLength + 1] = '\0';
   }
}

int main(){
	int tc;
	
	scanf("%d", &tc);
	getchar();
    
    for(int i = 0; i < tc; i++){
        scanf("%[^\n]", string);
        getchar();
    	removeVowel(string);
    	printf("Case #%d: %s\n", i + 1, string);
	}
    
    return 0;
}
