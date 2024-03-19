#include<stdio.h>
#include<string.h>
int main()
{
	char  s[790000];
	scanf("%s",s);
	int x=strlen(s);
	if(s[x-1]=='2'||s[x-1]=='4'||s[x-1]=='5'||s[x-1]=='7'||s[x-1]=='9')
	{
		printf("hon\n");
	}
	else if(s[x-1]=='3')
	{
		printf("bon\n");
	}
	else printf("pon\n");
}
