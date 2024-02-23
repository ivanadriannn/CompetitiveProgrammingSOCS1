// Ivan Adrian - 2602076323
// probF - Lili and Deadlines

#include<stdio.h>
#include<string.h>

int main(){
	int assignment;
	scanf("%d", &assignment);
	getchar();
	
	char subject[101][15];
	long long int deadline[101];
	
	for(int i = 0; i < assignment; i++){
		scanf("%s %lld", subject[i], &deadline[i]);
		getchar();
	}
	
	long long int tempDeadline;
	char tempSubject[15];
	
	for(int i = 0; i < assignment; i++){
	    for(int j = 0; j < assignment; j++){
	    	if(deadline[j] > deadline[i]){
	    		// sort the deadlines
	    		tempDeadline = deadline[i];
	    		deadline[i] = deadline[j];
	    		deadline[j] = tempDeadline;
	    		
	    		// sort the subjects
	    		strcpy(tempSubject, subject[i]);
	        	strcpy(subject[i], subject[j]);
	        	strcpy(subject[j], tempSubject);
			}
		} 			
	}
	
	// sort by the lexagraphical order process
	for(int i = 0; i < assignment; i++){
	    for(int j = 0; j < assignment; j++){
	    	if(deadline[i] == deadline[j]){
				if(strcmp(subject[i], subject[j]) < 0){
					strcpy(tempSubject, subject[i]);
					strcpy(subject[i], subject[j]);
					strcpy(subject[j], tempSubject);
				}
			}
		}
	}	
	
	for(int i = 0; i < assignment; i++){
		printf("%s\n", subject[i]);
	}
	
	return 0;
}
