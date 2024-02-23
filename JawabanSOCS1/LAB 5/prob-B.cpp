#include<stdio.h>

int main() {
 	int tc;
	int size;
	int x[550][550];
	int total[550];
    
	scanf("%d", &tc);
	getchar();

	for(int i = 1; i <= tc; i++){
		scanf("%d", &size);
		getchar();
		
	    for (int j = 0; j < size; j++) {
	        for (int k = 0; k < size; k++){
	            scanf("%d", &x[j][k]);
	            getchar();
	        }
	    }
	    
	    printf("Case #%d: ", i);
	    
	    for(int j = 0; j < size; j++){
	        total[j] = 0;
			for(int k = 0; k < size; k++){
				total[j] += x[k][j]; 
			}
		}
		
		for(int k = 0; k < size; k++){
		    if(k > 0){
		        printf(" ");
		    }
		    printf("%d", total[k]);
		}
		
		printf("\n");
		
	}
	
    return 0;
}
