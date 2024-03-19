#include <stdio.h>

int main()
{
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);

	if(a<c)
		a=c;
	if(b>d)
		b=d;
	printf("%d\n",(b-a)<1 ? 0 : b-a);

	return 0;
}