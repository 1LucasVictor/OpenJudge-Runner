#include<stdio.h>
int main()
{
	int a,b,i=0;
	scanf("%d %d",&a,&b);
	while (a-b>0)
	{
		a=a-b;
		i++;
	}
	printf("%d\n",i+1);
	return 0;
}