#include<stdio.h>

int main(){
	int tc, randomBoxes;
	long long int readOrder[100000];
	
	scanf("%d", &tc);
	getchar();
	
	for(int i = 1; i <= tc; i++){
		scanf("%d", &randomBoxes);
		
		for(int j = 1; j <= randomBoxes; j++){
			scanf("%lld", &readOrder[j]);
			getchar();
		}
		
    	printf("Case #%d: ", i);
    	
    	for(int j = randomBoxes; j >= 1; j--){
    	    if(j < randomBoxes){
    	        printf(" ");
    	    }
    		printf("%lld", readOrder[j]);
		}
		
		printf("\n");
		
	}
	
	return 0;
}
