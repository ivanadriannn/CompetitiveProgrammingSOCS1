// Ivan Adrian - 2602076323
#include<stdio.h>

int ackerman(int valM, int valN){
    if(valM == 0){
    	return valN + 1;
	}
    else if(valM > 0 && valN == 0){
    	return ackerman(valM - 1, 1);
	}
    else if(valM > 0 && valN > 0){
    	return ackerman(valM - 1, ackerman(valM , valN - 1));
	}
}

int main(){
    int valM, valN;
    scanf("%d %d", &valM, &valN);
    getchar();
    printf("result: %d\n", ackerman(valM, valN));
}
