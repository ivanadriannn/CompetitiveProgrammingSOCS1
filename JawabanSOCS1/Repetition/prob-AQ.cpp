// Ivan Adrian - 2602076323
// ProbAQ - IP Man

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	int tc;
	scanf("%d", &tc);
	getchar();
	
	char stringS[255];
	
	for(int i = 0; i < tc; i++){
		scanf("%s", stringS);
		getchar();
		
		int numCounter = 0;
		int pointCounter = 0;
		
		for(int j = 0; stringS[j] != '\0'; j++){
			if(isdigit(stringS[j])){
				numCounter = numCounter + 1;
				if(stringS[j+1] == '.'){
					continue;
				}
				else{
					if(isdigit(stringS[j+1])){
						numCounter = numCounter - 1;
					}
				}	
			}
			else{
				pointCounter = pointCounter + 1;
			}
		}
		
		if(numCounter == 6 && pointCounter == 5){
			printf("Case #%d: YES\n", i + 1);
		}
		else{
			printf("Case #%d: NO\n", i + 1);
		}
	}
	
	return 0;
}
