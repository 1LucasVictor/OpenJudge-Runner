#include<stdio.h>
int main()
{
	int a,b,s,d;
	scanf("%d%d",&a,&b);
	if(b%a==0)
	{
		s=a+b;
		printf("%d\n",s);
	}
	else
	{
		d=b-a;
		printf("%d\n",d);
	}
	return 0;
}