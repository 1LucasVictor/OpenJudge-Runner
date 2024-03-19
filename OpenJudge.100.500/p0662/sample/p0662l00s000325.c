#include<stdio.h>
#define max(a,c) ((a)>(c)?(a):(c))
#define min(b,d) ((b)<(d)?(b):(d))
int main()
{
	int a,b,c,d,min,max;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a>d&&c>b)
	printf("0\n");
	else
	{
		min=min(b,d);
		max=max(a,c);
		printf("%d\n",min-max);
		}
	return 0;
	}