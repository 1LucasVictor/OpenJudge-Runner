#include <stdio.h>

int main(int argc, char *argv[])
{
	int num, cnt = 0, n = 0;
	char c, dummy;

	scanf("%d", &n);
	scanf("%c", &dummy);

	char cList[n];
	int numList[n];
	int S[13] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int H[13] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int C[13] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int D[13] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	cnt = 0;
	while (cnt < n)
	{
		// scanf("%c %d\n",&c ,&num);
		scanf("%c",&c);
		scanf("%d",&num);
		scanf("%c", &dummy);
		cList[cnt] = c;
		numList[cnt] = num;
		cnt++;
	}

	cnt = 0;

	while (cnt < n)
	{
		if (cList[cnt] == 'S')
		{
			S[numList[cnt] - 1] = 1;
		}
		if (cList[cnt] == 'H')
		{
			H[numList[cnt] - 1] = 1;
		}
		if (cList[cnt] == 'C')
		{
			C[numList[cnt] - 1] = 1;
		}
		if (cList[cnt] == 'D')
		{
			D[numList[cnt] - 1] = 1;
		}
		cnt++;
	}

	cnt = 0;
	while (cnt < 13)
	{
		if (S[cnt] == 0)
		{
			printf("S %d\n", cnt + 1);
		}
		cnt++;
	}

	cnt = 0;
	while (cnt < 13)
	{
		if (H[cnt] == 0)
		{
			printf("H %d\n", cnt + 1);
		}
		cnt++;
	}
	cnt = 0;
	while (cnt < 13)
	{
		if (C[cnt] == 0)
		{
			printf("C %d\n", cnt + 1);
		}
		cnt++;
	}
	cnt = 0;
	while (cnt < 13)
	{
		if (D[cnt] == 0)
		{
			printf("D %d\n", cnt + 1);
		}
		cnt++;
	}
	return 0;
}

