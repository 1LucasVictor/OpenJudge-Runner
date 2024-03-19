#include<stdio.h>
int main(void)
{
	char str[100];
	int i;
	
	scanf("%s",str);
	
	i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	i--;
	while(i>=0)
	{
		putchar(str[i]);
		i--;
	}
	putchar('\n');
	return 0;
}