#include<stdio.h>

int main()
{
	int n;
	long int max=-1000001,min=1000001,sum=0;
	int i,a;
	
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		if(max<a)max=a;
		if(min>a)min=a;
		sum+=a;
	}
	printf("%ld %ld %ld\n",min,max,sum);
	return 0;
}