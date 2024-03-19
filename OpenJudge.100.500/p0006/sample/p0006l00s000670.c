#include <stdio.h>

int main(void)
{
	int debt=100000, interest;
	int i, week;
	scanf("%d", &week);

	for(i=0; i<week; i++)
	{
		interest = debt*5/100;
		if(interest%1000)
		{
			interest -= interest%1000;
			interest += 1000;
		}
		debt += interest;
	}
	printf("%d\n", debt);
	return 0;
}