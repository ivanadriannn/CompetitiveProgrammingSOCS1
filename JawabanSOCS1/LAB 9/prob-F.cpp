#include<stdio.h>

#define phi 3.14

int main(){
	int tc;
	float r, t;
	
	scanf("%d", &tc);
	getchar();
	
	for(int i = 0; i < tc; i++){
		scanf("%f %f", &r, &t);
		getchar();
		
		float luasPermukaan = 2 * phi * r * (r + t);
		
		printf("Case #%d: %.2f\n", i+1, luasPermukaan);
	}
	return 0;
}
