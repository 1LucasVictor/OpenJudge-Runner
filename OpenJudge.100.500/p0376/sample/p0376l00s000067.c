#include <stdio.h>

int main(void)
{
	int i,n;
	
	scanf("%d",&n);
	int a[n];
	
	for (i=0;i<n; i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<n-1;i++ )
		printf("%d ",a[n-1-i]);
		
	printf("%d\n",a[0]);
		
		return 0;
}
