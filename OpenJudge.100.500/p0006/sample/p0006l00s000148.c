#include <stdio.h>

int main(void)
{
	int n;
	int money;
	
	scanf("%d", &n);
	
	money = 100000;
	while (n != 0){
		money += money * 0.05;
		
		if (money % 1000 != 0){
			money = (money + 999) / 1000 * 1000;
		}
		n--;
	}
	printf("%d\n", money);
	
	return (0);
}