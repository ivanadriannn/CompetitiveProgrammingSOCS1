#include <stdio.h>

long long int square(long long int number){
    long long int squa = 0;
    for(int i = 1; i <= number; i++){
        if(number == i*i){
            squa = 1;
        }
    }
    return squa;
}

long long int cubic(long long int number){
    long long int cub = 0;
    for(int i = 1; i <= number; i++){
        if(number == i*i*i){
            cub = 1;
        }
   }
   return cub;
}

long long int prime(long long int number){
    long long int prim = 0;
    for(int i = 2; i <= number; i++){
        if((number % i) == 0){
            prim += 1;
        }
    }
    return prim;
}

int main(){
    int tc;
    scanf("%d", &tc);
    getchar();
    
    long long int inputNumber;
    for (int i = 1; i <= tc; i++){
        scanf("%lld", &inputNumber);
        getchar();
        
        if (square(inputNumber) == 1 && cubic(inputNumber) == 1){
            printf("Case #%d : square cubic\n", i);
        }
        else if(square(inputNumber) == 1){
            printf("Case #%d : square\n", i);
        }
        else if (cubic(inputNumber) == 1){
            printf("Case #%d : cubic\n", i);
        }
        else if (prime(inputNumber) == 1){
            printf("Case #%d : prime\n", i);
        }
        else{
            printf("Case #%d : none\n", i);
        }
    }
    
    return 0;
    
}
