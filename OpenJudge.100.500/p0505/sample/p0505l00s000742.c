#include<stdio.h>
int main()
{
	int a[100000],h,n;
	scanf("%d %d",&h,&n);
	int i;
	int s=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		s=s+a[i];
	
	}
	if(s<h)
	printf("No");
	else
	printf("Yes");
	
 } 