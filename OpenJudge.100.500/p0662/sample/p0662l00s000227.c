#include<stdio.h>
int main(void)
{
	int n,i,m,a,b,c,d,x,y;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a<0||a>=b||a>100||b<a||b<=0||b>100)
	return -1;
	else if(c<0||c>=d||c>100||d<c||d<=0||d>100)
	return -1;
	else if(b<c)
	printf("0\n");
	else if(a<=c&&b>=d)
	printf("%d\n",d-c);
	else if(a>=c&&b<=d)
	printf("%d\n",b-a);
	else 
	printf("%d\n",b-c);
	return 0;
 } 