#include<stdio.h>
int main()
{
	long long int a;
	scanf("%lld", &a);
	char bb[102];
	scanf("%s", bb);
	long long int b = 0;
	int i;
	for (i = 0; bb[i] != '\0'; i++)
	{
		if (bb[i] != '.')
		{
			b = 10 * b + bb[i] - '0';
		}
	}
	printf("%lld\n", a * b / 100);
	return 0;
}