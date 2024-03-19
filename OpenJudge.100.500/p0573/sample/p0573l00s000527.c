#include <stdio.h>



//文字は''でその者と比較できる。
int main()
{

	char mozi[5];
	int i = 0;
	int q, p = 0;
	int j, t;


	scanf("%s", mozi);

	for (i = 0; mozi[i] != '\0'; ++i);

	for (j = 3; j >= 0; j--)
	{

		for (t = 0; t < j; t++)
		{
			if (mozi[j] == mozi[t])
			{
				p++;
			}
		}
	}

	if (p == 2&& i == 4)
	{
		printf("Yes\n");
	}
	else {
		printf("No\n");
	}

	return 0;
}


