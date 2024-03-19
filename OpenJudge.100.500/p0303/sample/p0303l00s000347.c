#include<stdio.h>

int check(int p, int n, int k, int w[])
{
	int i=0;
	for(int j =0; j<k; j++)
	{
		int sum = 0;
		
		while(sum+w[i] <= p)
		{
			sum += w[i];
			i++;
			if(i==n)
			{
				return n;
			}
		}
	}
	return i;
	
}



int puton(int n, int k, int w[])
{
	int left,right, mid, v;
	
	left = 0;
	right = 100000 * 10000; //荷物の個数*一戸当たりの最大重量
	
	while(right-left>1)
	{
		mid = (left+right)/2;
		v=check(mid, n, k, w); //mid==pをきめて何個積めるかチェック
		if(v>=n)
		{
			right = mid;
		}
		else
		{
			left=mid;
		}
	}
	return right;
	
}

int main(void)
{

	int n, k, p;

	scanf("%d %d", &n, &k);
	
	int w[n];
	
	for(int i=0; i<n; i++)
	{
		scanf("%d", &w[i]);
	}

	p = puton(n, k, w);
	
	printf("%d\n", p);
	
	return 0;
	
}
