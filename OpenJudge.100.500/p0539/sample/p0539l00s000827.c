#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef long long ll;
typedef unsigned long long ull;

int main()
{
	int a;

	scanf("%d", &a);

	for (size_t i = 1; i <= 9; i++)
	{
		if (!(a % i) && a / i <= 9)
		{
			printf("Yes");
			return 0;
		}
	}
	printf("No");
}
