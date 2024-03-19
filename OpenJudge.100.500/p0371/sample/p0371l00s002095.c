#include <stdio.h>

int main(void)
{
	int n,a[10000],i;
	long long sum,max,min;
	scanf("%d",&n);
	for(i=0 ; i<n ; i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
		
	min=a[0]; max=a[0];
	
	for(i=0 ; i<n ; i++){
		if(a[i]<min)min=a[i];
		else if(a[i]>max)max=a[i];
	}

	printf("%d %d %d\n",min ,max ,sum);
	return 0;
}