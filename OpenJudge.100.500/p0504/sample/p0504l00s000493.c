#include <stdio.h>
int main()
{
	int a,b,i=0;
	scanf("%d %d",&a,&b);
	while(a>0)
	{
		a=a-b;
		i++;
	}
	printf("%d",i);
	return 0;
}