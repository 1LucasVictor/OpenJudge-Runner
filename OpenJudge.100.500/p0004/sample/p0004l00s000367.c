#include<stdio.h>
int main()
{
	long a,b,gcd,lcm,max,min,r;
	while((scanf("%ld %ld",&a,&b) != EOF))
	{
		max = a;min=b; if(b>a){max=b;min=a;}
		do
		{
			 r = max%min ;
			max = min;
			min = r;
		}while(min != 0);
		gcd = max;
		
		lcm = a*b/gcd;
		printf("%ld %ld\n",gcd,lcm);
	}
	return 0;
}