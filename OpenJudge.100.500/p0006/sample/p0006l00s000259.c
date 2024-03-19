#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	int i;
	int money = 100000;
	scanf("%d",&n);
	for (i = 0; i < n; i += 1)
	{
		money = money * 105 / 100;
		if(money % 1000)
		{
			money = money - (money % 1000) + 1000;
		}
	}
	printf("%d\n",money);
	return 0;
}