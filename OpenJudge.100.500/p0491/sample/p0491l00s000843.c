#include<stdio.h>
#include<math.h> 
int main ()
{
	int k,m,x,y;
	scanf("%d %d",&k,&m);
	x=k%m;
	y=abs(x-m);
	if (x<y)
	{
		printf("%d",x);
	}
	else
	{
		printf("%d",y);
	}
	return 0;
}