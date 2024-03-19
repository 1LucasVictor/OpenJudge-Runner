#include<stdio.h>
int main()
{
	int a,b,c,d,n;
	while(scanf("%d%d%d%d",&a,&b,&c,&d)!=EOF)
	{
		if(a<b&&c<d)
		{
			if(b>c&&b<d)
			printf("%d\n",b-c);
			else if(b>c&&b>d)
			printf("%d\n",d-c);
			else if(d>a&&d<b&&c<a)
			printf("%d\n",d-a);
			else if(d>b&&c<a)
			printf("%d\n",b-a);
			else printf("0\n");
		}
		else printf("0\n");
	}
	return 0;
}