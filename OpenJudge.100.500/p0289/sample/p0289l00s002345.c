#include <stdio.h>

//最大公約数を求める
int gcd(int x, int y);
//最小値を返す
int min(int a, int b);

int main(void)
{
	int x;	//整数
	int y;	//整数

	//2つの整数を入力する
	scanf("%d%d", &x, &y);

	//結果を出力する
	printf("%d\n", gcd(x, y));

	return 0;
}

//最大公約数を求める
int gcd(int x, int y)
{
	int g = 0;	//最大公約数
	int n = 0;
	int i = 0;

	if (x == y)
	{
		g = x;
	}
	else
	{
		for (i = 1; i < min(x, y); i++)
		{
			if ((x % i == 0) && (y % i == 0))
			{
				if (g < i)
				{
					g = i;
				}
				else
				{
					//何もしない
				}
			}
			else
			{
				//何もしない
			}
		}
	}

	//結果を返す
	return g;
}

//最小値を返す
int min(int a, int b)
{
	return (a >= b) ? b : a;
}
