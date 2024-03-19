#include<stdio.h>
int main(void)
{
	int a,b,i,x,s;

	scanf("%d %d",&a,&b);
	i = 1;
	for(s = 0;s <= b;s++)
	{
		s = s + a;
		if(s >= b)
		{
			break;
		}
		{
			i++;
		}
	}
	printf("%d\n",i);
return 0;
}