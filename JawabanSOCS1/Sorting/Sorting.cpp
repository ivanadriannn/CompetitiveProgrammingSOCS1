#include<stdio.h>
#include<math.h>

int main(){

    int n;

    scanf("%d", &n);
    getchar();

    int a[200];

    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
        getchar();
    }

    int temp;
    int max = 0;
    int indexMax[20];

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    int c = 0;

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<i+2;j++){
            int result = fabs(a[i] - a[j]);
            if(result > max){
                max = result; 
                indexMax[c] = i;
            }
            else if(result == max){
                c++;
                indexMax[c] = i;
                c++;
            }
        }
    }

    for(int i=0;i<=c;i++){
        printf("%d %d", a[indexMax[i]], a[indexMax[i]+1]);
//        if(i != c - 1){
//            printf(" ");
//        }
    }

    printf("\n");

    return 0;
}
