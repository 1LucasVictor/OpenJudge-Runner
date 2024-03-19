#include <stdio.h>
int gcd(int a,int b)
{
	int temp;
	while(b)
	{    
	    temp = b;
	    b = a % b;
	    a = temp;
	}
	return a;
}
int main()
{
	int a,b,r;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		int r = gcd(a,b);
		printf("%d %d",r,a*(b/r));	       
	}
	return 0;
} 