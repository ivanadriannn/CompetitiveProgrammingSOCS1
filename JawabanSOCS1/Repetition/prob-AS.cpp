// Ivan Adrian - 2602076323
// ProbAS - Hard Problem

#include<stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	getchar();
	
	float questionAmount;
	
	for(int i = 0; i < tc; i++){
		scanf("%f", &questionAmount);
		getchar();
		
		char answer[1000];
		char keyAnswer[1000];
		
		scanf("%s", answer);
		getchar;
		scanf("%s", keyAnswer);
		getchar();
		
		
		int value = 100;
		float correctAmount = 0;
		
		for(int j = 0; j < questionAmount; j++){
			if(answer[j] == keyAnswer[j]){
				correctAmount = correctAmount + 1;
			}
		}
		
		float average = (correctAmount/questionAmount);
		value *= average;

		printf("Case #%d: %d\n", i+1, value);
		
	}
	
	return 0;
}
