// Ivan Adrian - 2602076323
#include<stdio.h>

int n;
int matrix[255][255];
int result[255][255];

void inputMatrix(int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &matrix[i][j]);
			getchar();
		}
	}
}

void change(int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			result[j][i] = matrix[i][j];
		}
	}
}

void printTranspose(int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
		    if(j > 0){
		        printf(" ");
		    }
			printf("%d", result[i][j]);
		}
		puts("");
	}
}

int main(){
	scanf("%d", &n);
	getchar();
	
	inputMatrix(n);
	change(n);
	printTranspose(n);
	
	return 0;
}
