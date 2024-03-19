#include<stdio.h>
int main()
{
	int a,b,c,d;
	while(scanf("%d%d%d%d",&a,&b,&c,&d)!=EOF)
	{
		if(c>b)
		printf("0\n");
		else if(c>a&&d>b)
		printf("%d\n",b-c);
		else if(c>a&&d<b)
		printf("%d\n",d-c);
		else
		printf("%d\n",b-a);
	}
	return 0;
}
	