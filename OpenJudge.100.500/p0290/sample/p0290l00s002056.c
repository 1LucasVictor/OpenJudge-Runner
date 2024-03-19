#include <stdio.h>
#define MAX 10000
int main(void)
{
	int n, i, m, j, t= 0;
	scanf("%d",&n);
	int a[MAX] = {0};
	for(i = 0;i < n;i++)
	{
		scanf("%d",&a[i]);
		
		for(j = 2;j < a[i];j++)
		{
			if(a[i] % j == 0)
			{
				m = 0;
				break;
			}
			
		}
		if(m)
		{
			t++;
		}
		m = 1;
	}
	printf("%d\n",t);
	
	return 0;
}
