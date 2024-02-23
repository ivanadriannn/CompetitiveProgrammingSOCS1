// Ivan Adrian - 2602076323
// ProbAF - pigw kizq ixi siuc

#include<stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	
	int length;
	long long int k;
	
	char string[255];
	int temp[255];
	
	for(int i = 0; i < tc; i++){
		scanf("%d %lld", &length, &k);
		getchar();
		
		scanf("%[^\n]", string);
		printf("Case #%d: ", i+1);
		
		for(int j = 0; j < length; j++){
			temp[j] = string[j];
			temp[j] = temp[j] - 97;
			temp[j] = temp[j] + k;
			temp[j] = temp[j] % 26;
			temp[j] = temp[j] + 97;
			string[j] = temp[j];
			printf("%c", string[j]);
		}
		
		puts(" ");
		
	}
	
	return 0;
}

