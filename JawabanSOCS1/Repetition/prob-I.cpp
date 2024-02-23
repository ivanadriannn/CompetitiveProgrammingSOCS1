// Ivan Adrian - 2602076324
// ProbI Jolibi

#include<stdio.h>

int main(){
	int others;
	scanf("%d", &others);
	getchar();
	
	int jojo, lili, bibi;
	scanf("%d %d %d", &jojo, &lili, &bibi);
	getchar();
	
	int value;
	int total = jojo+lili+bibi;
	
	for(int i = 0; i < others; i++){
		scanf("%d", &value);
		getchar();
		total += value;
	}
	
	int average = total / (others+3);
	
	if(jojo >= average){
		puts("Jojo lolos");
	}
	else{
		puts("Jojo tidak lolos");
	}
	
	if(lili >= average){
		puts("Lili lolos");
	}
	else{
		puts("Lili tidak lolos");
	}
	
	if(bibi >= average){
		puts("Bibi lolos");
	}
	else{
		puts("Bibi tidak lolos");
	}
	
	return 0;
}
