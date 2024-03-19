#include <stdio.h>
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	int i=x,j=0,k;
	
	while(1)
	{
		k=((i*2)+(j*4));
		if(k==y)
		{
			printf("Yes\n");
			return 0;
		}
		i--;
		j++;
		k=0;
		if(i<0)
		{
			break;
		}
	}
	printf("No\n");
	return 0;
}
