#include<stdio.h>

int main(){
	int t, ut, ua;
	scanf("%d %d %d", &t, &ut, &ua);
	getchar();
	
	float finalScore = (0.2 * t) + (0.3 * ut) + (0.5 * ua);
	printf("%.2f\n", finalScore);

	return 0;
}
