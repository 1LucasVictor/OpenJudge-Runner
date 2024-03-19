#include<stdio.h>

int main(){
	int n,i;
	scanf("%d",&n);
	int a[100];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<(n-1);i++){
		printf("%d",a[n-i-1]); printf(" ");
	}
	printf("%d\n",a[0]);
	return 0;
}