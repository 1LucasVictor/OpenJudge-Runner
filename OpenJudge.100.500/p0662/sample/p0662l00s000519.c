#include<stdio.h>
int main(void)
{
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if ((b < c)&&(d<a))printf("0");
	else if (b > d)printf("%d", d - c);
	else if(b>c)printf("%d", b - c);
	else if (d > b)printf(b - a);
	else printf(b - c);
}