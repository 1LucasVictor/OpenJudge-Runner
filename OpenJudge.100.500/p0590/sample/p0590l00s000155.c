#include <stdio.h>

int main(void)
{
	int a,b,c,d,e,k,s,l;
	
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&k);
	
	l=a;
	if(l<b)l=b;
	if(l<c)l=c;
	if(l<d)l=d;
	if(l<e)l=e;
	
	s=a;
	if(s>b)s=b;
	if(s>c)s=c;
	if(s>d)s=d;
	if(s>e)s=e;
	
	if(l-s<=k)printf("Yay!\n");
	else printf(":(\n");
	
  return 0;
}
