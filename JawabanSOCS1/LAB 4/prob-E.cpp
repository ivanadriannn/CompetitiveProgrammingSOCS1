#include<stdio.h>

int main(){
	long int tc, n;
	char sentence[255];
	scanf("%ld", &tc);
	getchar();
	
	for(long int i = 1; i <= tc; i++){
		long int lili = 0, bibi = 0;
		scanf("%ld", &n);
		getchar();
		scanf("%s", sentence);
		getchar();
		for(long int j = 0; j < n; j++){
			if(sentence[j] == 'L'){
				lili = lili + 1;
			}
			else if(sentence[j] == 'B'){
				bibi = bibi + 1;
			}
		}
		if(lili > bibi){
    		printf("Lili\n");
    	}
    	else if(lili < bibi){
    		printf("Bibi\n");
    	}
    	else if(lili == bibi){
    		printf("None\n");
		}
	}
	
    return 0;
}
