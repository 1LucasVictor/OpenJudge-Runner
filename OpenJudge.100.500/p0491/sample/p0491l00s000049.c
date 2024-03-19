#include<stdio.h>
#include<math.h> 
int main ()
{
	long k,n,x,y;
	scanf("%ld %ld",&k,&n);
	x=k%n;
	y=abs(x-n);
	if (x<y)
	{
		printf("%ld",x);
	}
	else
	{
		printf("%ld",y);
	}
	return 0;
}