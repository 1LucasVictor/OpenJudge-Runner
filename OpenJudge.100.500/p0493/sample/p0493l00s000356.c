#include<stdio.h>

int main()
{
	int money;
	int coin_500;
	int coin_5;
	int happiness = 0;

	scanf("%d",&money);
	coin_500 = (int)(money / 500);
	coin_5 = (int)((money - coin_500 * 500) / 5);
	happiness = coin_500 * 1000 + coin_5 * 5;
	printf("%d\n",happiness);
}
