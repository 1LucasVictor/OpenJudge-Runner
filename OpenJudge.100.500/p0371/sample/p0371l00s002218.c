#include<stdio.h>
int main(){
	int n;
	long int max,min,sum=0;
	int i,a;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a);
		max = i == 0 ? a : max < a ? a : max;
		min = i == 0 ? a : min > a ? a : min;
		sum+=a;
	}
	printf("%ld %ld %ld\n",min,max,sum);
	return 0;
}

