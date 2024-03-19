#include<stdio.h>
int main()
{
	long int x,a,b;
	scanf("%ld%ld%ld",&x,&a,&b);
	if(a>=b) 
		printf("delicious");
	else if(x+a>=b)
		printf("safe");
	else	
		printf("dangerous");
}
