#include<stdio.h>
int main()
{
	int a,b,c,d;
	while(scanf("%d%d%d%d",&a,&b,&c,&d)!=EOF)
	{
		if(b<c||d<a)printf("0\n");
		if(c<=b&&b<d&&c>=a)printf("%d\n",b-c);
		if(a<=d&&d<b&&a>=c)printf("%d\n",d-a);
		if(c>=a&&d<=b)printf("%d\n",d-c);
		if(a>=c&&b<=d)printf("%d\n",b-a);
	}
	return 0;
} 