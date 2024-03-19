#include<stdio.h>
int main(void)
{
	int a,b,i,x,s;
	if (scanf("%d", &a) == 1) {}
	if (scanf("%d", &b) == 1) {}
	i = 1;
if(2 <= a && 20>= a && 1<=b && 20 >= b)
{
	for(s = a;;s = (s - 1) + a )
	{
		if(s >= b)
		{	
			break;
		}
		{
			i++;
		}
	}
	printf("%d\n",i);
}
return 0;
}