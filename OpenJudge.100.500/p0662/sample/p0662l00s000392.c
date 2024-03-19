#include<stdio.h>
int main()
{
	int a,b,c,d;
	while (scanf("%d%d%d%d",&a,&b,&c,&d)!=EOF)
	{
		if(c>=b||a>=d)
		{
			printf("0\n");
		}
		if(a<c&&c<b&&b<d)
		{
			printf("%d\n",b-c);
		}
		if(c<a&&a<b&&d<b)
		{
			printf("%d\n",d-a);
		}
		if(c>=a&&b>d)
		{
			printf("%d\n",d-c);
		}
		if(c>a&&b>=d)
		{
			printf("%d\n",d-c);
		}
		if(a>=c&&d>b)
		{
			printf("%d\n",b-a);
		}
		if(a>c&&d>=b)
		{
			printf("%d\n",b-a);
		}
		if(a==c&&b==d)
		{
			printf("%d\n",b-a);
		}
	}
	return 0;
}