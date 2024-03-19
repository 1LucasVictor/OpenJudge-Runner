#include<stdio.h>
int main(void)
{
	int a,b,x;
	char c;
	scanf("%d %c %d",&a,&c,&b);
	while(c!='?') {
		if(c=='+') {
			x=a+b;
		}
		if(c=='-') {
			x=a-b;
		}
		if(c=='*') {
			x=a*b;
		}
		if(c=='/') {
			x=a/b;
		}
		printf("%d\n",x);
	scanf("%d %c %d",&a,&c,&b);
	}
	return 0;
}