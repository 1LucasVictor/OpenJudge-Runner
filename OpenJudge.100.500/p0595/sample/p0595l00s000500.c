#include<stdio.h>
//abc120-A
/*
int main(void)
{
	int a, b, c,d;
	scanf("%d %d %d", &a, &b, &c);

	if (b >= a * c)
	{
		printf("%d", c);
	}

	else
	{
		d = b / a;
		printf("%d", d);
	}
	return 0;
}*/
//abc120-B
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
		
		if ((n > a) || (n > b))
		{
			break;
		}
		i++;
		n++;
	}
	printf("%d", common[k - 1]);


	return 0;
}