#include<stdio.h>;
int main (void)
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a>c)
		printf("NO");
		else if(a+b>=c)
		printf("YES");
		else
			printf("NO");
	return 0;
}