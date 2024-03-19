#include <stdio.h>
#include <math.h>
#include <assert.h>
#include <stdlib.h>
int main(void)
{
	int n,d;
	scanf("%d %d",&n,&d);
	assert(1<=n&&n<=2*pow(10,5));
	assert(0<=d&&d<=2*pow(10,5));
	
	//printf("%d %d\n",n,d);
	int i,x,y;
	int c=0;
	double l;
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&x,&y);
		//printf("%d %d\n",x,y);
		assert(abs(x)<=2*pow(10,5));
		assert(abs(y)<=2*pow(10,5));
		l=sqrt((double)((double)x*(double)x)+(double)((double)y*(double)y));
		//printf("%d %f\n",d,l);
		if((double)d<l)
		{
			;
		}
		else
		{
			c++;
		}
	}
	printf("%d\n",c);
	return 0;
}