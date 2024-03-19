#include <stdio.h>

int main(void)
{
	int a[200],b[200],c[200],n,j,i=0;
	while(1)
	{
		if((scanf("%d %d",&a[i],&b[i]))==EOF) break;
		c[i] = a[i] + b[i];
		i++;
	}
	for(j=0;j<i;j++)
	{
		for(n=1;1;n++)
		{
			if(c[j]/10 == 0)break;
			c[j]/=10;
		}
		printf("%d\n",n);
	}
	
	
	return 0;
}