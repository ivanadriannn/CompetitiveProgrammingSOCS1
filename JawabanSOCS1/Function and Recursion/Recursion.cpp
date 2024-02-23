#include<stdio.h>

int count = 0;

int calculation(int number){
	count = count + 1;
	if(number == 0){
		return 1;
	}
	else if(number == 1){
		return 2;
	}
	else if(number % 5 == 0){
		return number * 2;
	}
}

int main(){
	int tc;
	scanf("%d", &tc);
	getchar();
	
	int number;
	for(int i = 0; i < tc; i++){
		scanf("%d", &number);
		getchar();
		printf("Case #%d: %d %d\n", (i+1), calculation(number), count);
	}
	
	return 0;
}
