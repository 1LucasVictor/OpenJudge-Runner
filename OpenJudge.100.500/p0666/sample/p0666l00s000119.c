#include <stdio.h>
int main(int argc, char *argv[])
{
	long long int A,B,X,z,x2;
	while(scanf("%lld%lld%lld",&X,&A,&B)!=EOF)
	{
		z=A-B;
		x2=-1*X;
	    if(z>=0)printf("delicious\n");
		else if(z>=x2)printf("safe\n"); 
		else printf("dangerous\n");
	}
	return 0;
}