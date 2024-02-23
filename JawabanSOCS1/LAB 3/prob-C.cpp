#include<stdio.h>

int main() {
    int t, tc;
    int n, i, j, k;
    int matrixA[55][55], matrixB[55][55], matrixC[55][55]; 
    int matrixAB[55][55], matrixABC[55][55];
    
	scanf("%d", &t);
	getchar();

	for(tc = 1; tc <= t; tc++){
		scanf("%d", & n);
		getchar();
		
	    for (i = 0; i < n; i++) {
	        for (j = 0; j < n; j++){
	            scanf("%d", & matrixA[i][j]);
	            getchar();
	        }
	    }
		
	    for (i = 0; i < n; i++){
	        for (j = 0; j < n; j++){
	            scanf("%d", & matrixB[i][j]);
	            getchar();
	        }
	    }
	    
		for (i = 0; i < n; i++){
	        for (j = 0; j < n; j++){
	            scanf("%d", & matrixC[i][j]);
	            getchar();
	        }
	    }
	    
	    for (i = 0; i < n; i++){
	        for (j = 0; j < n; j++){
	            matrixAB[i][j] = 0;
	            for (k = 0; k < n; k++){
	                matrixAB[i][j] += matrixA[i][k] * matrixB[k][j];
	            }
	        }
		}
	        
	    for (i = 0; i < n; i++){
	        for (j = 0; j < n; j++){
	            matrixABC[i][j] = 0;
	            for (k = 0; k < n; k++){
	                matrixABC[i][j] += matrixAB[i][k] * matrixC[k][j];
	            }
	        }
		}
		
		printf("Case #%d:\n", tc);
	    
		for (i = 0; i < n; i++){
        	for (j = 0; j < n; j++){
        		if(j > 0){
        			printf(" ");
				}
            	printf("%d", matrixABC[i][j]);
        	}
    		printf("\n");
    	}
	}
	
    return 0;
}
