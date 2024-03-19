#include<stdio.h>

int main(void)
{
	int n;   //数列の長さ
	int i;   //くり返し用
	int number[1000];   //数列
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &number[i]);
	}
	for (i = n - 1; i >= 0;i--)
	{
		printf("%d", number[i]);
		if (i != 0)
		{
			printf(" ");
		}
	}
	printf("\n");
	return 0;

}
