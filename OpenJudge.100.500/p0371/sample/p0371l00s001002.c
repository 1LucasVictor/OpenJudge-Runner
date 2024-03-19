#include<stdio.h>
int main(void){
	int n,a,i;
	long long int max=-1000000,min=1000000,sum=0;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a);
		if(min>=a){
			min=a;
		}
		if(max<=a){
			max=a;
		}
		sum+=a;
	}
	printf("%lld %lld %lld\n",min,max,sum);
	return 0;
}
