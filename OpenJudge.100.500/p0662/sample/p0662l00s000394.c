#include<stdio.h>
int main()
{
	int a,b,c,d,s;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	s=b-a-c;
	if(c>b)
	printf("0");
	else
	printf("%d",s);
	return 0;
}