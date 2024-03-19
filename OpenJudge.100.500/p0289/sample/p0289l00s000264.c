#include<stdio.h>
int main(void)
{
	int x,y,i,d=1,small;
	scanf("%d %d",&x,&y);
	if(x<y){small=x;}else{small=y;}
	for(i=2;i<=small;i++)
	{
		if(x%i==0 && y%i==0){d=i;}
	}
	printf("%d\n",d);
	return 0;
}