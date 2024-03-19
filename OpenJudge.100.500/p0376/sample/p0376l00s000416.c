#include<stdio.h>
int main(void){
	int n,i = 0;
	int a[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("%d",a[n-1]);
	for(i=n-2;i>-1;i--){
		printf(" %d",a[i]);
	}
	printf("\n");
	return 0;
}
