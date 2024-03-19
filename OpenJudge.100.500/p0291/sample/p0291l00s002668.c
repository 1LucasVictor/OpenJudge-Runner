#include <stdio.h>

void main(){
	int i,j,n,max=-1000000000;
	
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=1;i<n;i++){
		for(j=i-1;j>=0;j--){
			if(max<a[i]-a[j]){
				max=a[i]-a[j];
			}
		}
	}
	
	printf("%d\n",max);
	
}