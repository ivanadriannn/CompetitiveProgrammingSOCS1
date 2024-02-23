#include<stdio.h>

int main(){
	int tc;
	int toysAmount, a, b, c, d;
	
	scanf("%d", &tc);
	getchar();
	
	for(int i = 0; i < tc; i++){
		scanf("%d %d %d %d %d", &toysAmount, &a, &b, &c, &d);
		getchar();
		
		int discardedToys = 0;
		for(int j = 0; toysAmount > 0; toysAmount--){
			if(toysAmount % a == 0 || toysAmount % b == 0 || toysAmount % c == 0 || toysAmount % d == 0){
				discardedToys = discardedToys + 1;
			}
		}
		
		printf("Case #%d: %d\n", i+1, discardedToys);
		
	}
	
	return 0;
}
