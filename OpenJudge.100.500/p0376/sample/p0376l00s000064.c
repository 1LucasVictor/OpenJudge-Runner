#include<stdio.h>
int main(void){
	int n;
	scanf("%d",&n);
	int a[100],i;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(int j= 0;j<n/2;j++){
	int x = a[j];
	a[j] = a[n-j-1];
	a[n-j-1] = x;
	}

	for(int k=0;k<n;k++){
	if(k==n-1) printf("%d\n",a[k]);
	else printf("%d ",a[k]);
	}
	return 0;
}
