#include<stdio.h>
int main(void)
{
	int a,b,t;
	int ans;
	int n;
	
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&t);
	
	n = (t+0.5)/a;
	
	ans = n*b;
	
	printf("%d",ans);
	
	return 0;
}
