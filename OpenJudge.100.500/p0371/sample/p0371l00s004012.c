#include<stdio.h>

int main()
{

	int n,a[10000],i,max,min,sum;

	max=0;
	sum=0;
	min=1000000;
		
	scanf("%d",&n);

	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(max<a[i])
			max=a[i];
		if(min>a[i])
			min=a[i];
		sum+=a[i];
	}

	printf("%d %d %d\n",min,max,sum);
	return 0;
}