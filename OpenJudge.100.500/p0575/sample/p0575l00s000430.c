#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
int main()
{
	int x,a;
	scanf("%d %d",&x,&a);
	if(x<a)printf("0");
	else printf("10");
	return 0;
}