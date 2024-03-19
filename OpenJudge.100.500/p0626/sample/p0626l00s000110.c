#include<stdio.h>
int main(void)
{
	int d,n,x;
	scanf("%d %d",&d,&n);
	x=(100*((n-1)/99)+n-99*((n-1)/99))*100;
  	if(d==0) x=(100*((n-1)/99)+n-99*((n-1)/99))*1;
  	if(d==2) x=x*100;
	printf("%d\n",x);
	return 0;
}


