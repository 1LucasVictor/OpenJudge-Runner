#include <stdio.h>

int main(void)
{
	int n,i,debt;
	int t;
	
	debt = 100000;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++){
		debt += debt/100*5;
		debt = (debt + 999) /1000 * 1000;
	}
	
	printf("%d\n", debt);
	
	return (0);
}