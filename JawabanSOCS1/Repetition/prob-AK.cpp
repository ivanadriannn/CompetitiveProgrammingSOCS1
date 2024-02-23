#include<stdio.h>

int main(){
	int N;
	scanf("%d", &N);
	getchar();
	
	int number[N+1];
	for(int i = 0; i < N; i++){
		scanf("%d", &number[i]);
		getchar();
	}
	
	int count = 1;
	for(int i = 0; i < N; i++){
		if(i == (N-1)){
			printf("%d", count);
		} 
		else if(number[i+1] != 1){
			count++;
		}
		else if(number[i+1] == 1){
			printf("%d ", count);
			count = 1;
		}
	}
	
	printf("\n");
	
	return 0;
	
}
