#include <stdio.h>
#include <math.h>
int main(){
	int i,n,a[10000],max=-1000000,min=1000000;
	long long int sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		min=fmin(min,a[i]);
		max=fmax(max,a[i]);
		sum+=a[i];
	}
	printf("%d %d %d\n",min,max,sum);
	return 0;
}
		