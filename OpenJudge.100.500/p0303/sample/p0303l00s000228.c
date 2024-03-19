#include <stdio.h>

int simulate(int *w, int n, int k, int c)
{
	int r = 0;
	for(int i = 0; i < n; ++i)
	{
		if(r < w[i])
		{
			if(k-- == 0) { return 0; }
			r = c;
		}
		r -= w[i];
	}
	return 1;
}

int main()
{
	int n, k, mid, low = 0, high = 0;
	int w[100000];
	
	scanf("%d %d", &n, &k);
	for(int i = 0; i < n; ++i)
	{
		scanf("%d", &w[i]);
		low = low > w[i] ? low : w[i];
		high += w[i];
	}
	
	while(low < high)
	{
		mid = (low + high) / 2;
		if(simulate(w, n, k, mid))
		{
			high = mid;
		}
		else
		{
			low = mid + 1;
		}
	}

	printf("%d\n", low);
}

