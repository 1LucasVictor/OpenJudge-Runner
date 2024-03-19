#include<stdio.h>

int main()
{
	char s[4];
    scanf("%s", s);
	//int a = s[0];
	printf("%d", s[0]+s[1]+s[2]-48*3);
	return 0;
}
