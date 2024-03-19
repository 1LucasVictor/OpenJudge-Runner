#include<stdio.h>

int main(){
	int a[100];
	int n;
	scanf("%d\n",&n);
	for(int i = 0; i < n;i++)scanf("%d ",&a[i]);
	for(int i = 0; i < n-1; i++) printf("%d ",a[n-i-1]);
	printf("%d\n",a[0]);
	return 0;
}

