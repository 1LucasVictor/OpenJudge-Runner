#include<stdio.h>

int main(void)
{
	char a[4];
	scanf("%s",a);
	if(a[1]=='B') 
		printf("ARC\n");
	else if(a[1]=='R')
		printf("ABC\n");
	return 0;
}