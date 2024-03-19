#include<stdio.h>
int main()
{
	int a,b,c,d,s,i;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(b>d)
	b=d;
	if(a<c)
	a=c;
	s=b-a;
	if(b<c||d<a)
	printf("0");
	else
	printf("%d",s);
	return 0;
}