//Ivan Adrian - 2602076323
#include<stdio.h>

int row, col, query;
int x, y, a;
char arr[255][255] = {0};

void change(int query, int x, int y, int a){
	for(int i = 0; i < query; i++){
		scanf("%d %d %d", &x, &y, &a);
		getchar();
		arr[x][y] = a;
	}
}

void print(int row, int col){
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			if(j > 0){
				printf(" ");
			}
			printf("%d", arr[i][j]);
		}
		puts("");
	}
}

int main(){
	scanf("%d %d %d", &row, &col, &query);
	getchar();

	change(query, x, y, a);
	print(row, col);
	
	return 0;
}
