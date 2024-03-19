#include<stdio.h>
main()
{
	int a,b,c;
	int n;
	scanf("%d",&n);
	a=n%10;
	n=n/10;
	b=n%10;
	c=n/10;
	if(c==7||a==7||b==7) printf("Yes");
	else printf("No");
}