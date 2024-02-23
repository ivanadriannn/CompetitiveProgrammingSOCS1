#include<stdio.h>

int checking(int teamAmount, int shirtNumber[150][150]){
	int num[150] = {0};
	for(int i = 0; i < teamAmount; i++){
		for(int j = 0; j < teamAmount; j++){
			if(shirtNumber[i][j] != 0){
				num[shirtNumber[i][j]-1] += 1;	
			}
		}
	}
	
	int uncompleteNum = 0;
	for(int i = 0; i < teamAmount; i++){
		if(num[i] < teamAmount){
			uncompleteNum++;
		}
	}
	return uncompleteNum;
}

int main(){
	int team;
	scanf("%d", &team);
	getchar();
	
	int inputNumber[150][150];
	for(int i = 0; i < team; i++){
		for(int j = 0; j < team; j++){
			scanf("%d", &inputNumber[i][j]);
			getchar();
		}
	}
	
	int result = checking(team, inputNumber);
	printf("%d\n", result);
	
	return 0;
}
