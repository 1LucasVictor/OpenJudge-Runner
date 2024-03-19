#include<stdio.h>
int main(void)
{
	int a,b,i,x,s;
	if (scanf("%d", &a) == 1) {}
	if (scanf("%d", &b) == 1) {}
	i = 1;

	for(s = a;s <= b;s = s + a)
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

return 0;
}