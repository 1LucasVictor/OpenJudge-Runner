#include<stdio.h>

int main(void)
{
	int a,i,n,max=0,min=0;
	unsigned long sum=0;
	scanf("%d",&n);
	scanf("%d",&a);
	max = a;
	min = a;
	sum = a;
	for(i=2;i<=n;i++){
		scanf("%d ",&a);
		if(max < a) max = a;
		if(min > a) min = a;
		sum += a;
	}
	printf("%d %d %ld\n",min,max,sum);
	return 0;
}