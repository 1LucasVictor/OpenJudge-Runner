#include<stdio.h>
#include<string.h>
int main()
{
	char s[11],t[12];

	scanf("%s%s",s,t);

	t[strlen(t)-1]='\0';
	if(strcmp(s,t)==0)
		puts("Yes");
	else
		puts("No");
	return 0;
}