#include<stdio.h>

void totalHadiah(int t){
    for(int i = 0; i < t; i++){
	    
	    int jumlahMurid;
	    int nilai[1100];
	    
	    scanf("%d", &jumlahMurid);
	    getchar();
	    
	    int maximum = 0;
	    int hadiah = 0;
	    
	    for(int j = 0; j < jumlahMurid; j++){
	        scanf("%d", &nilai[j]);
		    getchar();
	    }
		
		 for(int j = 0; j < jumlahMurid; j++){
       		if(nilai[j] > maximum){
	            maximum = nilai[j];
	            hadiah = 1;
        	}
       		else if(nilai[j] == maximum){
	            hadiah += 1;
        	}
    	}
    	
    	printf("Case #%d: %d\n", i+1, hadiah);
	}    
}

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	
	totalHadiah(t);
	
	return 0;
}
