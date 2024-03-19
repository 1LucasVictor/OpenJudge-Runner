#include<stdio.h>

int main(){
	int i;
	int n;
	int a[10000];
	
	int min=1000001;
	int max=-1000001;
	long long sum=0;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		a[i]=0;
		scanf("%d",&a[i]);
		if(a[i] < min) min=a[i];
		if(a[i] > max) max=a[i];
		sum+=a[i];
	}
	
	printf("%d %d %lld\n",min,max,sum);
	
	return 0;
}