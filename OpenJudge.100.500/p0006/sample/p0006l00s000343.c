#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int money;
	scanf("%d", &n);
	
	money = 100000;
	
	for (i = 0; i < n; i++){
		money = money + (money / 20);
		money = (money + 999) / 1000 * 1000;
	}
	
	printf("%d\n", money);
	
	return (0);
}