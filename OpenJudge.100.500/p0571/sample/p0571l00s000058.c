#include<stdio.h> 
int main()
{
	int n,a,b;
	int x,y;
	while(~scanf("%d%d%d",&n,&a,&b))
	{
		x=n*a;
		y=b;
		if(x<=y)
			printf("%d\n",x);
		else
			printf("%d\n",y);
	}
	return 0;
}