#include<stdio.h>
#include<string.h>
int main()
{
	char c[30];
	int i,ch;
	scanf("%s",c);
	ch=strlen(c);
	for(i=ch-1;i>=0;i--)
		printf("%c",c[i]);
	printf("\n");
	return 0;
}