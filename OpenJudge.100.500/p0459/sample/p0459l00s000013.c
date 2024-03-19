#include<stdio.h>
int main()
{
	int x,y,t,k;
	scanf("%d %d",&x,&y);
	t=0;
	k=0;
	t=(x*4-y)/(4-2);
	k=x-t;
	if((t+k)!=x||t<=-1||k<=-1) printf("No\n");
	else printf("Yes\n");
	return 0;
}
