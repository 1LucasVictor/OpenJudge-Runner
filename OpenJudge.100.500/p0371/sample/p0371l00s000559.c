#include <stdio.h>

int main(void){
	int n,a[10001],b,to=0,i,ii;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(ii=i+1;ii<n;ii++){
			if(a[i]>a[ii]){
				b=a[i];
				a[i]=a[ii];
				a[ii]=b;
			}
		}
	}
	for(i=0;i<n;i++){
		to+=a[i];
	}
	printf("%d %d %d\n",a[0],a[n-1],to);
	return 0;
}