#include<stdio.h>

void change1(int shiftingAmount, char string[1050]){
	for(int j = 0; string[j] != '\0'; j++){
		if(string[j] == '0'){
			string[j] = 'O';
		}
		else if(string[j] == '1'){
			string[j] = 'I';
		}
		else if(string[j] == '3'){
			string[j] = 'E';
		}
		else if(string[j] == '4'){
			string[j] = 'A';
		}
		else if(string[j] == '5'){
			string[j] = 'S';
		}
		else if(string[j] == '6'){
			string[j] = 'G';
		}
		else if(string[j] == '7'){
			string[j] = 'T';
		}
		else if(string[j] == '8'){
			string[j] = 'B';
		}
	}
}

void change2(int shiftingAmount, char string[1050]){
	for(int j = 0; string[j] != '\0'; j++){
		if(string[j] != ' '){
			string[j] = string[j] - shiftingAmount;
			if(string[j] < 'A' || string[j] > 'Z'){
				string[j] = 'Z' - ('A' - string[j]);
				string[j]++;
			}
		}
	}
}

int main(){
	FILE *fp;
	fp = fopen("testdata.txt", "r");
	
	int tc;
	fscanf(fp, "%d\n", &tc);
	
	int shiftingAmount;
	for(int i = 1; i <= tc; i++){
		fscanf(fp, "%d\n", &shiftingAmount);
		
		char string[1050];
		fscanf(fp, "%[^\n]", string);
		fgetc(fp);
		
		change1(shiftingAmount, string);
		change2(shiftingAmount, string);
		
		printf("Case #%d: %s\n", i, string);
		
	}
	
	return 0;
}
