#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(b<c||d<a)
	printf("0");
	else
	{
		if((a==0)||(a<c&&b<d))
		{
			printf("%d",b-c);
			return 0;
		}
		if((c==0)||(a>c&&b>d))
		{
			printf("%d",d-a);
			return 0;
		}
		if(a>c&&b<d)
		{
			printf("%d",b-a);
			return 0;
		}
		if(c>a&&d<b)
		{
			printf("%d",d-c);
			return 0;
		}
		if(a==c==0)
		{
			printf("%d",abs(b-d));
			return 0;
		}
		if(a==c&&b==d)
		{
			printf("%d",b-c);
			return 0;
		}
	}
	return 0;
}