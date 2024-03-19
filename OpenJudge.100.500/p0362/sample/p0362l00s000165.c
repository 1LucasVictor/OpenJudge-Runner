#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int than(int a, int b,int c);
int main(void)
{
	int a, b, c= 0;
	scanf("%d%d%d", &a,&b,&c);
	than(a, b, c);
	return 0;
}
int than(int a,int b,int c)
{
	if (a < b && b< c ){
		printf("Yes\n");
	}
	else {
		printf("No\n");
	}
	return 0;
}
