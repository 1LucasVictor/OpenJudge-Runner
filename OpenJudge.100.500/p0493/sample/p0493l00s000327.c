#include <stdio.h>

int main(void)
{
	int X, i, fiveh, five;
	
	i = 0;
	fiveh = 0;
	five = 0;
	
	scanf("%d", &X);
	
	while(i == 0){
		if ((X-500) >= 0){
			fiveh++;
			X = X - 500;
		}
		else i++;
	}
		
	i = 0;
		
	while(i == 0){
		if ((X-5) >= 0){
			five++;
			X = X - 5;
		}
		else i++;
	}
	
	printf("\n%d", 1000 * fiveh + 5 * five);
	
	return 0;
}