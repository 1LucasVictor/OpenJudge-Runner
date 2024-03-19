#include<stdio.h>
int main(void){
	int n,i,j,c,a[10000];
	long long int b=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
		b+=a[i];
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i]<a[j]){
				c=a[i];
				a[i]=a[j];
				a[j]=c;
			}
		}
	}
	printf("%lld %lld %lld\n",a[0],a[n-1],b);
	return 0;
}