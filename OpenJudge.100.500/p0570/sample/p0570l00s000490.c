#include<stdio.h>
int main(void)
{
	long int a,b,s;
	
	scanf("%ld %ld",&a,&b);
	
	if(a<b)
	{
		s=a;
		a=b;
		b=s;
	}
	
	if((a-b)%2==0)
	{
		printf("%ld\n",(a-b)/2+b);
	}
	else
	{
		printf("IMPOSSIBLE\n");
	}
	
	return 0;
}