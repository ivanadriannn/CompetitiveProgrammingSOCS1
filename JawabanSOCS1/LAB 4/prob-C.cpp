#include<stdio.h>

int main(){
	int tc, day;
	long long int likeAmount[day];
	scanf("%d", &tc);
	getchar();
	
	for(int i = 1; i <= tc; i++){
	    scanf("%d", &day);
	    getchar();
        if(i == 1){
        	likeAmount[i] = 0;
        }
        else if(i == 2){
        	likeAmount[i] = 1;
        }
        else if(i > 2){
        	likeAmount[i] = likeAmount[i - 1] + likeAmount[i - 2];
        }
		printf("Case #%d: %lld\n", i, likeAmount[day]);
    }
    
	return 0;
}
