#include<stdio.h>
#include<string.h>

int main(){
	int a;
	char kalimat[1500];
	scanf("%d",&a);
	
	for(int i=0; i<a; i++){
		scanf("%s",kalimat);
		printf("Case #%d :", i+1);
		for(int j=strlen(kalimat) - 1; j>=1; j--){
			printf("%c ",kalimat[j]);
		}
		printf("\n");	
	}

	return 0;
}
