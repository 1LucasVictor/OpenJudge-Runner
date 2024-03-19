#include<stdio.h>

int main(void)
{
	int n;
	int debt = 100000;
	int debtcpy;
	int i;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		debt *= 1.05;
		
		debtcpy = debt;
		
		if (debtcpy % 1000 > 0) {
			debtcpy = debtcpy % 1000;
			
			debt = debt - debtcpy + 1000;
		}
	}
	
	printf("%d\n", debt);
	
	return (0);
}