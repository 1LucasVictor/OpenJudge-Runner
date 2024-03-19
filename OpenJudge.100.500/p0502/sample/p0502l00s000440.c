#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[200];
	int i;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	int k=0;
	for(i=0;i<n;i++)
	if(a[i]%2==0)
	{
		if(a[i]%3!=0&&a[i]%5!=0)
		k=1;
	}
	if(k==0)
	printf("APPROVED");
	else
	printf("DENIED");
	return 0;
}
