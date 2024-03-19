#include<stdio.h>
int main(void){
int i,m,n,t;
	int a[101];
		scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&m);
		a[i]=m;
	}
	for(i=0;i<n/2;i++){
			t=a[i];
			a[i]=a[(n-1)-i];
			a[(n-1)-i]=t;
	}
	for(i=0;i<n;i++){
		if(i==n-1){
			printf("%d",a[i]);
		}
		else{
			printf("%d ",a[i]);
		}
	}
	
	printf("\n");
return 0;
}