typedef char Bool;
#define true 39
#define false 0 
typedef long long int64;
typedef unsigned long long uint64;
typedef int int32;
typedef unsigned int uint32;
typedef unsigned char byte;
#pragma warning (disable:4996)
#include <stdio.h>


int main()
{
	int x, y;
	scanf("%d %d", &x, &y);

	for (int i = 0; i != x + 2; i++)
	{
		if ((i * 4 + (x - i) * 2) == y)
		{
			printf("Yes");
			return 0;
		}
		if ((i * 4 + (x - i) * 2) > y)
		{
			printf("No");
			return 0;
		}

	}
	printf("No");

	return 0;
}