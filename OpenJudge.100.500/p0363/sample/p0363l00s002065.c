#include <stdio.h>

int main(void)
{
	int a,b,c;

	scanf("%d %d %d",&a,&b,&c);

	if((a<b)&&(b<c)&&(a<c))
	{
		printf("%d %d %d\n",a,b,c);
	}
	if((a<b)&&(a<c)&&(c<b))
	{
		printf("%d %d %d\n",a,c,b);
	}
	if((b<a)&&(a<c)&&(b<c))
	{
		printf("%d %d %d\n",b,a,c);
	}
	if((b<c)&&(b<a)&&(c<a))
	{
		printf("%d %d %d\n",b,c,a);
	}
	if((c<a)&&(a<b)&&(c<b))
	{
		printf("%d %d %d\n",c,a,b);
	}
	if((c<b)&&(c<a)&&(b<a))
	{
		printf("%d %d %d\n",c,b,a);
	}

	return 0;
}