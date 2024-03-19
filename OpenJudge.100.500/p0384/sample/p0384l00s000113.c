#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
	char str[1200];
	int length;
	int i;
	fgets(str,sizeof(str),stdin);
	length=strlen(str);
	for(i=0;i<length;i++)
	{
		if(!isalpha(str[i]))printf("%c",str[i]);
		else
		{
			if islower(str[i])printf("%c",toupper(str[i]));
			else printf("%c",tolower(str[i]));
		}
	}

	return 0;
}