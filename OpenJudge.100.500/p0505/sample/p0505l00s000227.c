#include <stdio.h>
int a[10000];
int main()
{
	int h,n,i,sum=0;
	scanf("%d %d",&h,&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	if(sum>=h) printf("Yes");
	else printf("No");
	return 0;
}