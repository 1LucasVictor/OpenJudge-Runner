#include<stdio.h>
int main()
{
	int a,b,c,d;
	while (scanf("%d%d%d%d",&a,&b,&c,&d)!=EOF)
	{
		if(c>b||d<a)
		{
			printf("0\n");
		}
		if(b>c&&a<c&&d>b)
		{
			printf("%d\n",b-c);
		}
		if(d>a&&c<a&&b>d)
		{
			printf("%d\n",d-a);
		}
		if(c>a&&d<b)
		{
			printf("%d\n",d-c);
		}
		if(a>c&&b<d)
		{
			printf("%d\n",b-a);
		}
	}
	return 0;
}