#include <stdio.h>
int main(void)
{
	int a;
	char s[10];
	scanf("%s",&s);
	for(a=0;a<10;a++)
	{
		if(s[a]=='A'&&s[a+1]=='B'&&s[a+2]=='C')
		{
			printf("ARC\n");
		}
		else if(s[a]=='A'&&s[a+1]=='R'&&s[a+2]=='C')
		{
			printf("ARC\n");
		}
	}
	return 0;
}