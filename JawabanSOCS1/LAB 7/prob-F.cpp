// Ivan Adrian - 2602076323
#include<stdio.h>

int garden[255][255];

void gardenArea(int size1, int size2){
	for(int i = 1; i <= size1; i++){
		for(int j = 1; j <= size2; j++){
			scanf("%d", &garden[i][j]);
			getchar();
		}
	}
}

void change(int size1, int size2, int changeAmount){
	int index1, index2, change;
	for(int i = 1; i <= changeAmount; i++){
		scanf("%d %d %d", &index1, &index2, &change);
		getchar();
		for(int j = 1; j <= size1; j++){
		    for(int k = 1; k <= size2; k++){
		        garden[index1][index2] = change;
		    }
		}
	}
}

void printMap(int size1, int size2){
	for(int i = 1; i <= size1; i++){
		for(int j = 1; j <= size2; j++){
			if(j > 1){
				printf(" ");
			}
			printf("%d", garden[i][j]);
		}
		puts("");
	}
}

int main(){
	int size1, size2;
	scanf("%d %d", &size1, &size2);
	getchar();
	
	gardenArea(size1, size2);
	
	int changeAmount;
	scanf("%d", &changeAmount);
	getchar();
	
	change(size1, size2, changeAmount);
	printMap(size1, size2);
	
	return 0;
}
