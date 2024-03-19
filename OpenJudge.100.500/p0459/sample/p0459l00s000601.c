#include<stdio.h>
int main()
{
	int x,y,t=0,k=0;
	scanf("%d %d",&x,&y);
	if(y>=2*x&&y<=4*x) printf("Yes\n");
	else printf("No\n");
	return 0;
}