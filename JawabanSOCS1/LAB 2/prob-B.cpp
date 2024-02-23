#include<stdio.h>

int main (){
    long int n, possibleWin = 0;
    long int counter = 2;
    
    scanf("%ld", &n);
    getchar();
    
    for(long int i = 1; i < n; i++){
        counter *= 2;
    }
    
    possibleWin = counter - 1;
    printf("%ld\n", possibleWin);
    
    return 0;
}



