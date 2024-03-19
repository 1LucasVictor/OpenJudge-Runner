#include <stdio.h>

int main(void)
{
	int i, n, money;
	
	scanf("%d", &n);
	
	money = 100000;
	for (i = 0; i < n; i++){
		money += (money * 0.05);
		money += 999;
		money = (money / 1000) * 1000;
	}
	
	printf("%d\n", money);
	
	return (0);
}