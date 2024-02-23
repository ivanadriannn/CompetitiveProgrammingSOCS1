#include<stdio.h>

int main(){
	long long int bibiWeapons, dragonAttacks;
	long long int weaponPower[105000], dragonPower[105000];
	long long int totalPower1 = 0, totalPower2 = 0;
	scanf("%lld %lld", &bibiWeapons, &dragonAttacks);
	getchar();
	
	for(long long int i = 0; i < bibiWeapons; i++){
		scanf("%lld", &weaponPower[i]);
		getchar();
		if(weaponPower[i] > totalPower1){
			totalPower1 = weaponPower[i];
		}
	}
	
	for(long long int j = 0; j < dragonAttacks; j++){
		scanf("%lld", &dragonPower[j]);
		getchar();
		if(dragonPower[j] > totalPower2){
			totalPower2 = dragonPower[j];
		}
	}
	
	if(totalPower1 > totalPower2){
	    printf("The dark secret was true\n");
	}
	else{
	    printf("Secret debunked\n");
	}
	
	return 0;
}
