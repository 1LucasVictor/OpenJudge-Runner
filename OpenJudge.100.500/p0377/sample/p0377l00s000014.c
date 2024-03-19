#include <stdio.h>

int main(void) {
	int n, i, j, k, x;
	char moji1[52];
	char moji2[4]={'S', 'H', 'C', 'D'};
	int rank1[52];
	int rank2[13]={1,2,3,4,5,6,7,8,9,10,11,12,13};
	scanf("%d\n", &n);
	for (i=1; i<=n; i++)
	{
		scanf("%c%d\n", &moji1[i-1], &rank1[i-1]);
	}
	for (i=1; i<=4; i++)
	{
		for (j=1; j<=13; j++)
		{
			x=0;
			for (k=1; k<=n; k++)
			{
				if (moji2[i-1]==moji1[k-1] && rank2[j-1]==rank1[k-1])
				{
					x=1;
				}
			}
			if (x==0)
			{
				printf("%c %d\n",moji2[i-1], rank2[j-1]);
			}
		}
	}
	return 0;
}