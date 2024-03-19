#include<stdio.h>

int main(void)
{
	char Chr[1000];
	int total = 0;
	int n = 0;
	int count = 0;
	int kekka[1000];
	while (1)
	{
		scanf("%c", &Chr[n]);
		if (Chr[n] == '\n')
		{
			kekka[count] = total;
			total = 0;
			count++;
		}
		else
		{
			total = total + (Chr[n] - '0');
		}

		//最初に0が入力されたら終了
		if (Chr[n] == '0' && total ==0)
		{
			break;
		}

	}
	for (int i = 0; i < count; i++)
	{
		printf("%d\n", kekka[i]);
	}
	return 0;
}
