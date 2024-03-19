#include<stdio.h>
int main(void)
{
	int a[10000],b,x,i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&x);
		a[i]=x;
	}
	printf("%d",a[n-1]);
	for(i=n-2;i>=0;i--){
		printf(" %d",a[i]);
	}
	printf("\n");
	
	return 0;
}

