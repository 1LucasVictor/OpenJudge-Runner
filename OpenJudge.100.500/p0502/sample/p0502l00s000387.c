#include <stdio.h>

int main(void)
{
	int n;
	int a[1000];
	int i;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	/* DENIEDと出力するのは、偶数かつ、3または5の倍数以外の数字が存在するときのみ */
	for (i = 0; i < n; i++)
	{
		/* 奇数の場合、倍数の判定をしない */
		if (a[i] % 2 == 0)
		{
			if (a[i] % 3 != 0 && a[i] % 5 != 0)
			{
				printf("DENIED\n");
				return 0;
			}
		}	
	}
	
	printf("APPROVED\n");

	return 0;
}