#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	c=a/b;
	if(a%b!=0)
	{
		c=c+1;
	}
	printf("%d\n",c);
	return 0;
}
