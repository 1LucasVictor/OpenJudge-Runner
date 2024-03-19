#include<stdio.h>
int main(void)
{
	int a, b, k,i,n;
	int common[200];
	scanf("%d %d %d", &a, &b, &k);
	i = 0;
	n = 1;

	while (1)
	{
		if ((a % n == 0) && (b % n == 0))
		{
			common[i] = n;
		}
		i++;
		n++;
		if ((n > a) || (n > b))
		{
			break;
		}
	}
	printf("%d", common[k - 1]);


	return 0;
}