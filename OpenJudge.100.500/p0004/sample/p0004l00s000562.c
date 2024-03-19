#include<stdio.h>


int main()
{
	int a, b,c,d,temp,i,k = 0;
	int num[100] = { 0 };

	while (scanf("%d %d", &a, &b) != EOF)
	{
		if ((a > 0 && a <= 2000000000) && (b > 0 && b <= 2000000000))
		{
			c = a;
			d = b;
			while (temp = a%b)
			{
				a = b;
				b = temp;
			}

			num[k] = b;
			++k;
			num[k] = (c/ b)*d;
			++k;
		}
	}

	for (i = 0; i < k;)
	{
		printf("%d %d\n", num[i], num[i + 1]);
		i += 2;
	}

	return 0;
}
