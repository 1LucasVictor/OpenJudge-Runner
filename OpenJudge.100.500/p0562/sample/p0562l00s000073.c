#include<stdio.h>
int main(void)
{
	int a,b,n=1,i=0;
	scanf("%d %d", &a, &b);
	while(n<b)
	{
		n+=a-1;
		i++;
	}
	printf("%d\n", i);
	
	return 0;
}