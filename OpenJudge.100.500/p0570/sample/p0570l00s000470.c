#include<stdio.h>
int main()
{
	int a,b;

	scanf("%d%d",&a,&b);

	if(abs(a-b)%2!=0)
		puts("IMPOSSIBLE");
	else
		printf("%d",(a+b)/2);		
	return 0;
}