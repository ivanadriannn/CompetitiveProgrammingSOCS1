#include<stdio.h>

// Ivan Adrian - 2602076323

int checkIn(int guestAmount, long long int roomRequest[]){
	long long int happyGuest = guestAmount;
	for(int i = 0; i < guestAmount - 1; i++){
		for(int j = i + 1; j < guestAmount; j++){
			if(roomRequest[i] == roomRequest[j]){
				happyGuest = happyGuest - 1;
				roomRequest[j] = 1 - j;
			}
		}
	}
	return happyGuest;
}


int main(){
	int guest;
	scanf("%d", &guest);
	getchar();
	
	long long int roomNumber[5500];
	for(int i = 0; i < guest; i++){
		scanf("%lld", &roomNumber[i]);
		getchar();
	}
	
	long long int happyAmount;
	happyAmount = checkIn(guest, roomNumber);
	printf("%lld\n", happyAmount);
	
	return 0;
}
