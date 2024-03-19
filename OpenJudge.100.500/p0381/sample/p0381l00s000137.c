#include <stdio.h> 

int main(void)
{	
	int n, x, i, j, k, kumi = 0;

	while(1)
	{
		scanf("%d %d",&n, &x);

		if((n == 0) && (x == 0))
		{
			break;
		}
		
		for(i=1; i<=n; i++)
		{
			for(j=i+1; j<=n; j++)
			{
				for(k=j+1; k<=n; k++)
				{
					if(x == (i+j+k) && (i != j) && (i != k) && (j != k))
					{
						kumi++;
					}
				}
			}
		}

		printf("%d\n",kumi);

		kumi = 0;
	}

	return 0;
}