#include <stdio.h>

int main(void)
{
	int n, i;
	int money;
	
	scanf("%d", &n);
	
	money = 100000 + (n * 0.05 * 100000);
	
	if (money % 10000 != 0){
		money = money - (money % 10000) + 10000;
	}
	
	printf("%d\n", money);
	
	return (0);
}