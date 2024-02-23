// Ivan Adrian - 2602076323
// probC - White and Black Horse
#include<stdio.h>

int meet(int newPositionX1, int newPositionY1, int x2, int y2){
	int returnValue = (newPositionX1 == x2 && newPositionY1 == y2);
	return returnValue;
}

int validation(int newPositionX1, int newPositionY1){
	int returnValue = (newPositionX1 >= 0 && newPositionX1 < 8 && newPositionY1 >= 0 && newPositionY1 < 8);
	return returnValue;
}

int step(int maxMove, int x1, int y1, int x2, int y2){
    if(maxMove != 0)
	{
    	for(int j = 0; j < 8; j++){
    		
	    	int xAxis[9] = {2, 2, 1, 1, -1, -1, -2, -2};
			int yAxis[9] = {1, -1, 2, -2, 2, -2, 1, -1};
			
	        int newPositionX1 = x1 + xAxis[j];
			int newPositionY1 = y1 + yAxis[j];
			
			int counter = 1;
			
	        if(validation(newPositionX1, newPositionY1))
			{
	            if(meet(newPositionX1, newPositionY1, x2, y2))
				{
					return counter;
				}
	            if(step(maxMove - 1, newPositionX1, newPositionY1, x2, y2))
				{
	            	return counter;
				}
	        }
    	}
	}
	else if(maxMove == 0)
	{
		return 0;
	}
	
	return 0;
	
}

int main(){
    int tc;
    
    scanf("%d", &tc);
    getchar();

	int maxMove;
	char blackX1;
	char whiteX2;
    int blackY1;
	int whiteY2;
    int result;
	
    for(int i = 0; i < tc; i++){
        scanf("%d", &maxMove);
        getchar();
        
        scanf("%c%d %c%d", &blackX1,&blackY1, &whiteX2,&whiteY2);
        getchar();
        
        if(step(maxMove*2, blackX1 - 65, blackY1 - 1, whiteX2 - 65, whiteY2 - 1) == 1)
		{
        	printf("Case #%d: YES", i + 1);
        }
		else
		{
        	printf("Case #%d: NO", i + 1);
		}
		 
		puts("");
    }
    return 0;
}
