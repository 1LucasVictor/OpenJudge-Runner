#include <stdio.h>
 
int main()
{
	int n,c=0,i;
	scanf("%d",&n);
	for(i=0;i<3;i++)
	{
		int d=n%10;
		if(d==1)
		c++;
		n=n/10;
		}
		printf("%d",c);
		}