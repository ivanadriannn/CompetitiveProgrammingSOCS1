#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

int main(){
	
    FILE *fp;
    
	fp = fopen("testdata.in", "r");
    
    int tc1, tc2;
    char shortWord[255][255], originalWord[255][255];
    char sentence[255];
    char end;
	
	fscanf(fp,"%d\n", &tc1);
	
    for(int i = 0 ; i < tc1; i++){
        fscanf(fp, "%[^#]#%s\n", shortWord[i], originalWord[i]);
		fgetc(fp);
    }

    fscanf(fp,"%d\n", &tc2);
    
    for(int i = 0; i < tc2; i++){
    	
        printf("Case #%d:\n", i + 1);
        
   		while(true){
            fscanf(fp,"%s%c", sentence, &end);
            for(int j = 0; j < tc2; j++){
                if(strcmp(sentence,shortWord[j]) == 0){
					strcpy(sentence, originalWord[j]);
           	 	}
            }
            
            printf("%s%c", sentence, end);
            
            if(end == '\n'){
            	break;
			}
 		}
    }

    return 0;
}

