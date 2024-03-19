#include<stdio.h>
#include<math.h>

int main(void)
{
	int n, i, j, c=0;
	
	scanf("%d", &n);
	
	int a[n];
	
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		
			for(j=2; j<=sqrt(a[i]); j++)
			{
				if(a[i] % j == 0)
				{
					a[i]=0; //割り切れたら0にする
					break;
				}
			}
			
			if(a[i] != 0)
			{
//				printf("%d ", a[i]);
				c++;
			}
	
	}
	
	printf("%d\n", c);
	
	return 0;
	
}
