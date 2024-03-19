#include<stdio.h>
int main()
{
	int n,a,b;
	scanf("%d",&n);
	a=n/100;
	n=n%100;
	b=n/10;
	n=n%10;
	if(a==7||b==7||n==7) printf("Yes\n");
	else printf("No\n");
	return 0;
}
