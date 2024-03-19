#include<stdio.h>

int main()
{
	int i,n,a,b,c;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d %d %d",&a,&b,&c);
		a=a*a,b=b*b,c=c*c;
		if(a+b==c||a+c==b||b+c==a)
			printf("YES\n");
		else
			printf("NO\n");
	}
    return 0;
}