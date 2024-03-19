#include<stdio.h>

int main()
{
	int w,h,x,y,r;
	
	scanf("%d %d %d %d %d",&w,&h,&x,&y,&r);
	
	if(x==w || y==h || x<0 || y<0)
	{
		printf("No\n");
	}
	else
	{
		printf("Yes\n");
	}
}
