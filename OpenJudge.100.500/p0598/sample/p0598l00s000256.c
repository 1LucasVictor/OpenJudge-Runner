#include<stdio.h>
#include<string.h>
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
}
//abc120-B
int main(void)
{
	int a, b, k, tmp;
	int ans = 0, i, j;

	scanf("%d %d %d", &a, &b, &k);

	if (a < b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}

	for (i = b; i > 0; i--)
	{
		if ((a % i + b % i) == 0)
		{
			ans += 1;
		}
		if (ans == k)
		{
			break;
		}

	}
	printf("%d", i);
	return 0;
}
//abc119-A
int main(void)
{
	int a, b, c;
	scanf("%d/%d/%d", &a, &b, &c);
	if (b < 5)
	{
		printf("Heisei");
	}
	else
	{
		printf("TBD");
	}

	
	return 0;
}
//abc119-b
int main(void)
{
	int a, i;
	float sum = 0;
	char s[15];
	float y;

	scanf_s("%d", &a);
	for (i = 0; i < a; i++)
	{
		scanf_s("%f", &y);
		scanf_s("%s", s, 15);
		if (strcmp(s, "JPY") == 0)
		{
			sum += y;
		}

		else
		{
			sum += y * 380000;
		}
	}
	printf("%f", sum);
	return 0;
}*/

int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	if (b % a == 0)
	{
		printf("%d", a + b);
	}
	else
	{
		printf("%d", b - a);
	}

	return 0;
}