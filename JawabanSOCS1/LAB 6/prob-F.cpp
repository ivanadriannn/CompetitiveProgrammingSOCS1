#include<stdio.h>
#include<string.h>

// Ivan Adrian - 2602076323

void changedSentence(char sentence[]){
    int length = strlen(sentence);
	
	for(int i = 0; i <= length - 1; i++){
	    if(sentence[i] >= 'a' && sentence[i] <= 'z'){
	        sentence[i] = sentence[i] - 32;
	    }
	}
	
	for(int i = 0; i <= length - 1 ; i++){
    	if(sentence[i] == 'I'){
    		   sentence[i] = '1';
    	}
    	else if(sentence[i] == 'R'){
    		sentence[i] = '2';
    	}
    	else if(sentence[i] == 'E'){
    		sentence[i] = '3';
    	}
    	else if(sentence[i] == 'A'){
    		sentence[i] = '4';
    	}
    	else if(sentence[i] == 'S'){
    		sentence[i] = '5';
    	}
    	else if(sentence[i] == 'G'){
    		sentence[i] = '6';
    	}
    	else if(sentence[i] == 'T'){
    		sentence[i] = '7';
    	}
    	else if(sentence[i] == 'B'){
    		sentence[i] = '8';
    	}
    	else if(sentence[i] == 'P'){
    		sentence[i] = '9';
    	}
    	else if(sentence[i] == 'O'){
    		sentence[i] = '0';
    	}
    	else if(sentence[i] == ' '){
    		continue;
    	}
	}
	
	printf("%s\n", sentence);
	
}

int main(){
	char inputSentence[11000];
	scanf("%[^\n]", inputSentence);
	getchar();
	
	changedSentence(inputSentence);
	
	return 0;
	
}
