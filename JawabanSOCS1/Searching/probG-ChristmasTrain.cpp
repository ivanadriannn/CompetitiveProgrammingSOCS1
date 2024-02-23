#include<stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	getchar();
	
	int carriages;
	long long int timeAmount;
	int number[1002];
	
	for(int i = 1; i <= tc; i++){
		scanf("%d %lld", &carriages, &timeAmount);
		getchar();
		
		for(int j = 0; j < carriages; j++){
			scanf("%d", &number[j]);
			getchar();
		}
		
		int count = 0;
		for(int j = 0; j < carriages-1; j++){
			for(int k = j+1; k < carriages; k++){
				if(number[j] > number[k]){
					int temp = number[j];
					number[j] = number[k];
					number[k] = temp;
					count += 1;
				}
			}
		}
		
		long long int totalTime = count*timeAmount;
		printf("Case #%d: %lld\n", i, totalTime);
		
	}
	
	return 0;
}
