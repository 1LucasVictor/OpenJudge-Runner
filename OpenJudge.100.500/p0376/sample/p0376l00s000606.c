#include <stdio.h>

int main(void)
{
	int n,i;
	scanf("%d",&n);
	
	int arr[n];
	for(i=0;i<n;i++) scanf("%d",&arr[i]);
	
	printf("%d",arr[n-1]);
	for(i=n-2;i>=0;i--) printf(" %d",arr[i]);
	
	printf("\n");
	return 0;
}