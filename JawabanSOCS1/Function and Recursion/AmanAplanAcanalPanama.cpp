#include<stdio.h>
#include<string.h>

void palindrome(char string[1050], int index){
	char compare1[1050];
	char compare2[1050];
	
    int length = strlen(string);
    length -= (index + 1);
    
    if(string[index] == string[length]){
        if(index + 1 == length || index == length){
            printf("yes\n");
            return;
        }
        palindrome(string, index + 1);
    }
    else if(string[index] = string[length]){
        printf("no\n");
    }
}

int main(){
    int tc;
    scanf("%d", &tc);
    getchar();
    
    int position1 = 0;
    char s[1050];
    
    for(int i = 0; i < tc; i++){
        scanf("%[^\n]", s);
        getchar();
        printf("Case #%d: ", i+1);
		palindrome(s, position1);
    }
    
    return 0;
}
