// Ivan Adrian - 2602076323
#include<stdio.h>
#include<string.h>

int main(){
	int tc;
	int checkPoint;
	int length;
	
	scanf("%d", &tc);
	getchar();
	
	char username[tc][110000];
	char temp[30];
	
	for (int i = 0; i < tc; i++){
		for (int j = 0; j < 26; j++) {
			temp[j] = 0;
		}
		
		scanf("%s", username[i]);
		getchar();
		
		length = strlen(username[i]);
		for (int j = 0; j < length; j++){
			temp[username[i][j] - 'a'] = 1;
		}
		
		checkPoint = 0;
		
		for (int j = 0; j < 26; j++){
			if (temp[j] == 1){
				checkPoint += 1;
			}
		}
		
		if(checkPoint % 2 == 0){
			printf("Case #%d: Yay\n", i+1);
		}
		else{
			printf("Case #%d: Ewwww\n", i+1);
		}
		
	}
	return 0;
}
