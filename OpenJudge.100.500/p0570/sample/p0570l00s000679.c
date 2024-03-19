#include<stdio.h>
int main()
{
	int a,b,k;
	scanf("%d %d",&a,&b);
	if(a%2!=b%2) printf("IMPOSSIBLE\n");
	else printf("%d\n",(a+b)/2);
	return 0;
}
