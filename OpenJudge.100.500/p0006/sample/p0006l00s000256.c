/*
	http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0007
	Debt Hell
*/

#include <stdio.h>
int main(void)
{
	int n,i,debt,temp;
	debt = 100000;
	scanf("%d", &n);

	for (i = 0; i < n; ++i)
	{
		debt = debt * 1.05;
		temp = debt % 1000;
		if (temp != 0)
		{
			debt = debt - temp + 1000;
		}
	}

	printf("%d\n", debt);
	return 0;
}