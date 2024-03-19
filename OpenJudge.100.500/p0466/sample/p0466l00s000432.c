#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	int i,l,count=0;
	char s[100],s1[100];
	scanf("%s%s",s,s1);
	l = strlen(s);
	for(i=0; i<l; i++)
	{
		if(s[i]==s1[i])
		{
			count++;
		}
	}
	if(count==l)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}