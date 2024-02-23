#include<stdio.h>

int main(){
	int cagesAmount;
	scanf("%d", &cagesAmount);
	getchar();
	
	long long int animals;
	long long int animalsAmount = 0;
	
	for(int i = 0; i < cagesAmount; i++){
		scanf("%lld", &animals);
		getchar();
		
		animalsAmount += animals;
	}
	
	printf("%lld\n", animalsAmount);
	
	return 0;
}
