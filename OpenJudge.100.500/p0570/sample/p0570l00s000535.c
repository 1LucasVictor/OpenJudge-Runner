#include <stdio.h>
#include <stdlib.h>

int main ()
{
	long long int a,b,c,d1,d2;
	scanf ("%lld %lld",&a,&b);
	c= ((b-a)/2);
	d1= (a+c);
	d2= (b-c);
	if (d1==d2)
	{
		printf ("%lld\n",d1);
	}
	else 
	{
		printf ("IMPOSSIBLE\n");
	}
	
	return 0;
}
