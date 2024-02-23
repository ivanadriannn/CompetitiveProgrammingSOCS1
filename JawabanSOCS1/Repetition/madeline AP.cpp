#include<stdio.h>

int main(){
	
	int tc;
	scanf("%d", &tc);
	getchar();
	
	int length;
	long long int k;
	int a;
	
	for(int i=0;i<tc;i++){
		scanf("%d %lld", &length, &k);
		getchar();
		
		char word[length+1];
		char temp[length+1];
		
		for(int j=0;j<length;j++){
			scanf("%c", &word[j]);
			long long int result;
			long long int newWord = 0;
			int word2;
			word2 = word[j] - 'a';
			result = word2 + k;
			while(result > 25){
				result -= 26;
			}
			newWord = result + 97;
			temp[a] = newWord;
			a++;
			result = 0;
			newWord = 0;
		}

		printf("Case #%d: ", i+1);
		for(int j=0;j<a;j++){
			printf("%c", temp[j]);
		}
		
		a = 0;

		printf("\n");
	}
	
	return 0;
}
