#include <stdio.h>
#include <string.h>

int main()
{
	long int a,b,c;
	scanf("%ld",&a);
	int i;
	scanf("%d",&i);
	int j;
	long int  sum =0;
	long int  ar[i];
	for(j=0;j<i;j++)
	{	
		scanf("%ld", &ar[j] );
		sum=sum+ar[j];

	}
	if(sum>=a)
	{
		printf("Yes");
	}
	else
		printf("No");

	return 0;
}