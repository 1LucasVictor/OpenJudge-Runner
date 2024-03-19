#include<stdio.h>
int main(void)
{
	int a[1000],n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)  scanf("%d",&a[i]);
	printf("%d",a[n]);
	for(i=n-1;i>=1;i--)  printf(" %d",a[i]);
	printf("\n");
	return 0;
}
