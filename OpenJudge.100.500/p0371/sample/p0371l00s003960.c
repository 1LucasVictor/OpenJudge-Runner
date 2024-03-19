#include <stdio.h>
int main(void){
	int i,a,n,max,min;
	long int sum;
	scanf("%d",&n);
	scanf("%d ",&a);
	max=a;
	min=a;
	sum=a;
	for(i=1;i<n;i++){
		int b;
		scanf("%d ",&b);
		if(max<b)max=b;
		if(min>b)min=b;
		sum=sum+b;
	}
	printf("%d %d %ld\n",min,max,sum);
}