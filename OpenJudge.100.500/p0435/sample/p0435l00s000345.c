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
		if(sqrt((x*x)+(y*y))<=d)
		{
			c++;
		}
		
		
	}printf("%lld\n",c);
}