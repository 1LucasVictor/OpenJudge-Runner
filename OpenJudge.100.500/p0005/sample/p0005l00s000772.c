#include<stdio.h>

int main()
{
	char str[21];
	int len=0;
	
	scanf("%s",str);
	while(*(str+len))
	{
		len++;
	}
	while(len--)
	{
		putchar(*(str+len));
	}
	putchar('\n');
	return 0;
}