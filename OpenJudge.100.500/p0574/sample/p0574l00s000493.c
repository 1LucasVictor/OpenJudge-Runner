//#include "pch.h"
#include "stdio.h"
#include "stdlib.h"

int main()
{
	int n;
	scanf("%d", &n);

	int nPrev;
	int nNext;

	nNext = n % 10;
	n /= 10;

	int flag = 0;
	for (int i = 3; i > 0; i--)
	{
		nPrev = nNext;
		nNext = n % 10;
		n /= 10;
		if (nNext == nPrev)
		{
			flag = 1;
			break;
		}
	}

	if (flag)
		printf("Bad");
	else
		printf("Good");

	return 0;
}