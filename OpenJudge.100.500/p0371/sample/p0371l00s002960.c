#include <stdio.h>
int main(void)
{
	int n,i;
	int min,max;
	long long int sum=0;
	
	scanf("%d",&n);
	
	int a[n];
	
	scanf("%d",&a[0]);
	min = a[0];
	max = a[0];
	sum += a[0];
	
	for(i=1;i<n;i++)
	{
		scanf("%d",&a[i]);
		
		if(min > a[i])
			min = a[i];
		if(max < a[i])
			max = a[i];
		sum += a[i];
		
	}
	
	printf("%d %d %d\n",min,max,sum);
	
	
	return 0;
}