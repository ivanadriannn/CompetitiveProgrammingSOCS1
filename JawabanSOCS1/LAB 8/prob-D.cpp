#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Plants{
	char spesies[110];
	int nomor;
}tanaman[1200];

int main(){
	
	FILE *fp;
	
	fp = fopen("testdata.in", "r");
	
	int n;
	
	fscanf(fp, "%d", &n);
	
	for(int i = 0; i < n; i++){
		fscanf(fp, "%d#%[^\n]", &tanaman[i].nomor, tanaman[i].spesies);
		fgetc(fp);
	}
	
	Plants temp;
	
	for(int i = 0; i < (n - 1); i++){
		for(int j = 0; j < (n - 1 - i); j++){
			if(strcmp(tanaman[j].spesies, tanaman[j + 1].spesies) > 0){
				temp = tanaman[j];
				tanaman[j] = tanaman[j + 1];
				tanaman[j + 1] = temp;
			}
		}
	}
	
	for(int i = 0; i < n; i++){
		printf("%d %s\n", tanaman[i].nomor, tanaman[i].spesies);
	}
	
	return 0;
}

