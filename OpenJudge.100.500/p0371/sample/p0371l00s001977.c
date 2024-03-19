#include <stdio.h>
int	main(void)
{
	int n,min,max,i;
	long sum;
	int a[10000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	min=max=sum=a[0];
	for(i=1;i<n;i++){
		sum+=a[i];
		if(a[i]<min){
			min=a[i];
		}else if(a[i]>max){
			max=a[i];
		}
	}
	printf("%d %d %ld\n",min,max,sum);
	return	0;
}