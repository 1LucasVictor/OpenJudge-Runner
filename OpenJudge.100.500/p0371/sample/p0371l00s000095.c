#include <stdio.h>

int main(void)
{
	int a[11000],n,i,max,min;
	long long int sum;
	scanf("%d %d",&n,&a[1]);
	max=a[1];
	min=a[1];
	sum=a[1];
	for(i=2;i<=n;i++){
		scanf("%d",&a[i]);
		if(max<a[i]){
			max=a[i];
		}
		if(min>a[i]){
			min=a[i];
		}
		sum=sum+a[i];
	}
	printf("%d %d %lld\n",min,max,sum);
	return 0;
}