#include <stdio.h> 

int main(void)
{
	int a,b,c,x,n=0;
	scanf("%d %d %d",&a,&b,&c);
	for(x=a;x<=b;x++)
	{
		if((c%x)==0)
		{
		n++;
		}
	}
	printf("%d\n",n);
	return 0;
}