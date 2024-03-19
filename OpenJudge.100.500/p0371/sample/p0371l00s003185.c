#include <stdio.h>
int	main(void)
{
	int n,min,max,i;
	long sum;
	int a[10000];
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	min=max=sum=a[0];
	for(i=1;i<n;i++){
		sum+=a[i];
		min=(a[i]<min ? min=a[i] : min);
		max=(a[i]>max ? max=a[i] : max);
	}
	printf("%d %d %ld\n",min,max,sum);
	return	0;
}