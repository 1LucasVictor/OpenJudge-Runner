#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(c>=b||a>=d)
	printf("0");
	if(c>=a&&c<b)
	{
		if(b<=d)
		{
			printf("%d",b-c);
		}
		if(b>d)
		{
			printf("%d",d-c);
		}
	}
	if(a>=c&&d>a)
	{
		if(b<=d)
		{
			printf("%d",b-a);
		}
		if(b>d)
		{
			printf("%d",d-a);
		}
	}
	if(a==c&&b==d)
	printf("%d",b-a);
	return 0;
}