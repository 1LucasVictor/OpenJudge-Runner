#include<stdio.h>

int main()
{
	int a, b, c, d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if (a - c <= 0)
	{
		if (b <= c) printf("0");
		else if (b > c&&b < d) printf("%d", b - c);
		else printf("%d", d - c);
	}
	else 
	{
		if (a >= d) printf("0");
		else {
			if (b <= d)printf("%d", b - a);
			else  printf("%d", d - a);
		}
	}
		 return 0;
}