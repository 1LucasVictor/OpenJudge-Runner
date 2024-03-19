#include <stdio.h>
#include <stdlib.h>
main()
{
	long a;
	long b;
	long c;
	long k;
	
	scanf("%ld",&a);
	scanf("%ld",&b);
	scanf("%ld",&c);
	scanf("%ld",&k);
	
	long max=0;
	
	long w,r;
	
	long d=0;
	long e=0;
	
	if(k!=0)
	{
		if(a-k<=0)
		{
			while(a!=0)
			{
				max+=1;
				a--;
				d++;
			}
		}
		else
		{
			while(k!=0)
			{
				max+=1;
				k--;
			}
		}	
	}
	
	if((k-d)!=0)
	{
		if(b-(k-d)<=0)
		{
			while(b!=0)
			{
				max+=0;
				b--;
				e++;
			}
		}
		else
		{
			w=k-d;
			while(w!=0)
			{
				max+=0;
				w--;
			}
		}
	}
	
	if((k-d-e)!=0)
	{
		if(c-(k-d-e)>0)
		{
			r=k-d-e;
			while(r!=0)
			{
				max-=1;
				r--;
			}
			
		}
		else
		{
			while(c!=0)
			{
				max-=1;
				c--;
			}
		}
	}
	
	printf("%ld",max);
}

		