#include <stdio.h>

int main(){
	long long int min;
	long long int max ;
	int i,n;
	long long int sum = 0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		long long int tmp;
		scanf("%lld",&tmp);
		if(i==0){
			min = tmp;
			max = tmp;
		}
		if(tmp<=min) min = tmp;
		if(tmp>=max) max = tmp;
		sum+=tmp;
	}
	printf("%d %d %d\n",min,max,sum);
	return 0;
}