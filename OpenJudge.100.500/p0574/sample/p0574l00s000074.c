#include<stdio.h>

int main(void)
{
	int s;
	int a, b, c, d;
	scanf("%d", &s);
	
	a = s / 1000;
	b = s / 100 % 10;
	c = s / 10 % 10;
	d = s % 10;
	
	if(a == b)
		puts("Bad");
	else if(b == c)
		puts("Bad");
	else if(c == d)
		puts("Bad");
	else
		puts("Good");
	return 0;
}