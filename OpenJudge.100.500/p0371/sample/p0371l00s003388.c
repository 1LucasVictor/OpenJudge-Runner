#include<stdio.h>
int main(){

	int i,j,n,a[10000],min,max;
	long sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	max=a[0];	min=a[0];
	for(i=0;i<n;i++){
		if(max<a[i]){
			max=a[i];
		}else if(min > a[i]){
			min=a[i];
		}
		sum+=a[i];
	}
	printf("%d %d %ld\n",min,max,sum);
	return 0;
}