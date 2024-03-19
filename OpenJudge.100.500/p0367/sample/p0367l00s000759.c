#include <stdio.h>
int main()
{
	int a,b,c,n=0;
	scanf("%d%d%d",&a,&b,&c);
	if(b<a)
	{
		a=a+b;
		b=a-b;
		a=a-b;
	}
	for(int i=1;i<=c;i++)
	{
		if(c%i==0&&c/i>=a&&c/i<=b)
		n++;
	}
	printf("%d\n",n);
	return 0;
}
