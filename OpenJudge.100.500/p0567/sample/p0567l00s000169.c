#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int d=b+c-a;
	
	if(d>=0)
	printf("%d\n",b+c-a);
	else printf("0\n");
}