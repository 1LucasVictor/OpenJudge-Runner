#include<stdio.h>
int main(){
	int i,n;
	long a[10000],min,max,sum;

	min=1000000;
	max=-1000000;
	sum=0;

	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%ld",&a[i]);
		if(a[i]<min)min=a[i];
		if(a[i]>max)max=a[i];
		sum+=a[i];
	}
	printf("%ld %ld %ld\n",min,max,sum);
	return 0;
}