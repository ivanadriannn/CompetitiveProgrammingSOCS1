#include<stdio.h>

int main(){
	
	int n;
	int x;
	int num[120];
	int total;
	int area, perimeter;
	
	FILE *fp;
	
	fp= fopen ("ice.txt", "r");
	
	fscanf(fp, "%d\n", &n);
	
	for(int i=0;i<n;i++){
		fscanf(fp, "%d\n", &x);
		area = 0;
		perimeter = 0;
		for(int j=0;j<x;j++){
			fscanf(fp, "%d", &num[j]);
		}
		for(int j=0;j<x;j++){
			area = area + (4 * num[j]);
			perimeter = perimeter + (8 * num[j] - (4 * (num[j]-1)));
			if(j != x - 1){
                if(num[j] <= num[j + 1]){
                    perimeter = perimeter - (4 * num[j]);
                }
				else{
                    perimeter = perimeter - (4 * num[j + 1]);
                }
            }
		}
		
	printf("Case #%d: %d %d\n", i+1, perimeter, area);
	
	}
	
	fclose(fp);
	
	return 0;
}

