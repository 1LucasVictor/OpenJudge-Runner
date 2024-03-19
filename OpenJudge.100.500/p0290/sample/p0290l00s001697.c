#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int cPrime(int x)
{

	if(x%2==0) return 1;
	int i, len=sqrt(x);

	for(i=3;i<=len;i+=2)
	{
		if(x%i==0 && x!=i)
			return 1;
	}

	return 0;
}

int main()
{
	int a,count=0;

	scanf("%d",&a);

	while(a--)
	{
		int x;
		scanf("%d",&x);

		if((cPrime(x)==0) || x==2)
			count++;
	}

	printf("%d\n",count);

	return 0;
}

