#include<stdio.h>
int main(void){
	int n,i,j;
	long long int a[10000],b=0,c;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
		b+=a[i];
	}
	for(i=0;i<n;i++){
		for(j=n;j>i;j--){
			if(a[j-1]<a[i]){
				c=a[j-1];
				a[j-1]=a[i];
				a[i]=c;
			}
		}
	}
	printf("%lld %lld %lld\n",a[0],a[n-1],b);
	return 0;
}