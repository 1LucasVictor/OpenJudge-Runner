#include<stdio.h>
int main(void)
{
	int a,b,n,i=1;
	scanf("%d %d", &a, &b);
	n=a;
	while(n<b)
	{
		n+=a-1;
		i++;
	}
	printf("%d\n", i);
	
	return 0;
}