#include<stdio.h>

long long int n, jojoCount;
int i, j;

long long int process(int tc){
    jojoCount = 0;
		
	for(j = n; j > 0; j /= 10){
		jojoCount = (jojoCount * 10) + (j % 10);
	}
	return jojoCount;
}

int main (){
	int tc;

	scanf("%d",&tc);
	getchar();
    
    for(i = 1; i <= tc; i++){
		scanf("%lld", &n);
		getchar();
		process(tc);
		printf("Case #%d: %lld\n", i, jojoCount + n);
    }
	
	return 0;
}
