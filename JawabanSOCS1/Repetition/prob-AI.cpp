#include<stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	getchar();
	
	for(int i = 0; i < tc; i++){
		long long int N;
		scanf("%lld", &N);
		getchar();
		
		int num[N+1];
		long long int countAll = 0;
		long long int countSome = 0;
		
		for(int j = 0; j < N; j++){
			scanf("%d", &num[j]);
			getchar();
		}
		
		for(int j = 0; j < N; j++){
			countAll = countAll + num[j];
		}
		
		if(countAll % 2 != 0){
			printf("Case #%d: No", i+1);
		}
		else if(countAll % 2 == 0){
			for(int j = 0; j < N; j++){
				countSome = countSome + num[j];
				long long int temp = countAll/2;
				
				if(countSome == temp){
					printf("Case #%d: Yes", i+1);
					break;
				}
				else if(j == (N - 1)){
					printf("Case #%d: No", i+1);	
				}
				
			}
		}
		
		puts("");
		
	}
	
	return 0;
}
