#include<stdio.h>
#include<math.h>
int main()
{
	int n,d,i,c=0;
	float x,y;
	scanf("%d %d",&n,&d);
	while(n--)
	{
		scanf("%f %f",&x,&y);
		if(sqrt((x*x)+(y*y))<=d)
		{
			c++;
		}
		
		
	}printf("%d\n",c);
}