#include<stdio.h>
#include<string.h>

int main(){
	
	int n;
	int test;
	char words[255];
	char a[20];
	char b[20];
	
	FILE *fp;
	
	fp = fopen("testdata.in", "r");
	
	fscanf(fp, "%d\n", &n);
	
	for(int i=0;i<n;i++){
		fscanf(fp, "%s#%s\n", &a, &b);
	}
	
	printf("Masukkin angka: ");
	
	scanf("%d\n", &test);
	
	for(int i=0;i<test;i++){
		scanf("%[^\n]", &words);
		int length = strlen(words);
		for(int j=0;j<length;j++){
			if(words[j] == 's' && words[j+1] == 'y'){
			printf("saya");
		}
		else if(words[j] == 't' && words[j+1] == 'd' && words[i+2] == 'k'){
			printf("tidak");
		}
		else if(words[j] == 'a' && words[j+1] == 'k'){
			printf("aku");
		}
		else if(words[j] == 'm' && words[j+1] == 'w'){
			printf("mau");
		}
		else if(words[j] == 'k' && words[j+1] == 'm'){
			printf("kamu");
		}
		else if(words[j] == 't' && words[j+1] == 'd' && words[j+2] == 'r'){
			printf("tidur");
		}
		else if(words[j] == 't' && words[j+1] == 'd' && words[j+2] == 'k'){
			printf("tidak");
		}
		else if(words[j] == 't' && words[j+1] == 'p'){
			printf("tapi");
		}
		else if(words[j] == 'b' && words[j+1] == 'l' && words[j+2] == 'j' && words[j+3] == 'r'){
			printf("belajar");
		}
		else if(words[j] == 'p' && words[j+1] == 'k'){
			printf("pakai");
		}
		else if(words[j] == 's' && words[j+1] == 'y' && words[j+2] == 'r'){
			printf("sayur");
		}
		else if(words[j] == 'n' && words[j+1] == 's'){
			printf("nasi");
		}
		else if(words[j] == ' '){
			printf(" ");
		}
		}
	}
	
	fclose(fp);
	
	return 0;
}
