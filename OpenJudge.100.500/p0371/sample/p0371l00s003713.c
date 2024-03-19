#include <stdio.h>
int main(void){
	long long int a,sum=0,max,min;
	int i,j;
	scanf("%d",&j);
	for(i=0;i < j;i++){
		scanf("%lld",&a);
		sum += a;
		if(i==0){
			max=min=a;
		}
		if(max < a){
			max = a;
		}else if(min > a){
			min = a;
		}
	}
	printf("%lld %lld %lld\n",min,max,sum);
return 0;
}
