#include <stdio.h>

int main(void)
{
	int n;
	int amax = -1000000;
	int C[200000];
	scanf("%d", &n);
	for (int t = 0; t < n; t++)
	{
     scanf("%d", &C[t]);
    }
	
	
	for (int j = 0; j < n; j++)
	{
		for (int t = j + 1; t < n; t++)
		{
			int comp = C[t] - C[j];
			if (amax < comp)
			{
				amax = comp;
			}
		}
	}
	printf("%d\n", amax);
	return 0;
}