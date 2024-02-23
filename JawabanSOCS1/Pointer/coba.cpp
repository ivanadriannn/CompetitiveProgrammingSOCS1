#include<stdio.h>

int main(){
	int tc;
	scanf("%d", &tc); 
	getchar();
	
	int q;
 	char codeS[1050];
	char number1[1050];
	char number2[1050];
	char temp[1050];
 
 	for(int i = 0; i < tc; i++){
  		scanf("%d", &q); 
		getchar();
 		scanf("%s", &codeS);
 		getchar();
 		
  		for(int j = 0; j < q; j++){
   			scanf("%s %s", &number1[j], &number2[j]);
   			getchar();
  		}
  		
   		for(int j = 0; j < q; j++){
   			temp[j] = codeS[number1[j]-1];
   			codeS[number1[j]-1] = codeS[number2[j]-1];
   			codeS[number2[j]-1] = temp[j];
  		}
  		
 		printf("Case #%d: %s\n", i+1, codeS);
 		
 	}
 
	return 0;
}

