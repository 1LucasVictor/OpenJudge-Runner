#include<stdio.h>
#include<math.h>
int main()
{
	long long int n,d,i,c=0;
	float x,y;
	scanf("%lld %lld",&n,&d);
	while(n--)
	{
		scanf("%f %f",&x,&y);
		if(((x*x)+(y*y))<=d*d)
		{
			c++;
		}
		
		
	}printf("%lld\n",c);
}