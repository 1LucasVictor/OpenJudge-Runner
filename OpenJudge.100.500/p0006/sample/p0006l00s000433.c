#include<stdio.h>
#define RATE 1.05/*利子*/

int main()
{
	long int money=100000,kiri;/*借り入れ,商*/
	int n;/*経過期間*/
	int i;

	do
	{
		scanf("%d",&n);
	}while(n<=0 || 100<n);

	for(i=0;i<n;i++)
	{
		money *=1.05;
		kiri = money/1000;

		if(money%1000 !=0)
			money = kiri*1000+1000;
	}

	printf("%ld\n",money);

	return 0;
}