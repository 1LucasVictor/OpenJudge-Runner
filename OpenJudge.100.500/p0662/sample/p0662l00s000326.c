#include<stdio.h>
int main(void)
{
	int n,i,m,a,b,c,d,x,y;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a*10%2!=0||a*10%5!=0)
	return -1;
	if(b*10%2!=0||b*10%5!=0)
	return -1;
	if(c*10%2!=0||c*10%5!=0)
	return -1;
	if(d*10%2!=0||d*10%5!=0)
	return -1;
	if(a<0||a>=b||a>100||b<=0||b>100)
	return -1;
	else if(c<0||c>=d||c>100||d<=0||d>100)
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