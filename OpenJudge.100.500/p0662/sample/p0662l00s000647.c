#include<stdio.h>
int main(void)
{
	int n,i,m,a,b,c,d,x,y;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(b<c)
	printf("0\n");
	else if(a<c&&b>d)
	printf("%d\n",d-c);
	else if(a>c&&b<d)
	printf("%d\n",b-a);
	else 
	printf("%d\n",b-c);
	return 0;
 } 