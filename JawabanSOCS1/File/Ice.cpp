#include<stdio.h>

int perimeter;

void perimeterCalculation(int i, int stacks, int iceBlocks[150]){
	perimeter = 0;
	for(int j = 1; j <= stacks; j++){
		perimeter += ((4 * iceBlocks[j]) + 4);
			
		if(j != stacks){
            if(iceBlocks[j] <= iceBlocks[j + 1]){
                perimeter -= (4 * iceBlocks[j]);
            }
			else{
                perimeter -= (4 * iceBlocks[j + 1]);
            }
    	}
	}
}

int main(){
	FILE *ice;
	ice = fopen ("testdata.in", "r");
	
	int tc;
	fscanf(ice, "%d\n", &tc);
	
	for(int i = 1; i <= tc; i++){
		int stacks;
		fscanf(ice, "%d\n", &stacks);
		
		int area = 0, total = 0;
		int iceBlocks[150];
		
		for(int j = 1; j <= stacks; j++){
			fscanf(ice, "%d", &iceBlocks[j]);
			total += iceBlocks[j];
		}
		
		area += (4 * total);
		perimeterCalculation(i, stacks, iceBlocks);
		printf("Case #%d: %d %d\n", i, perimeter, area);
	
	}
	
	fclose(ice);
	
	return 0;
}

