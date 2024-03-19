#include<stdio.h>
int main()
{
	int h,n,a[10000],i,x;
	scanf("%d %d",&h,&n);
	x=0;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		x+=a[i];
	}
	if(h-x<=0) printf("Yes\n");
	else printf("No\n");
	return 0;
}
