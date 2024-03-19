#include<stdio.h>
int main(void)
{   int a,b,c,d,t,m,p;
	while(scanf("%d%d%d%d",&a,&b,&c,&d)!=EOF)
	{
	if(a>c)t=a;
	else t=c;
	if(b<d)m=b;
	else m=d;
	p=m-t;
	if(p>0)printf("%d\n",p);
	else printf("%d\n",0);}
	return 0;
}