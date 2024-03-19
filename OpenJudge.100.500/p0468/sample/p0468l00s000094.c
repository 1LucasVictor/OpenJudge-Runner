#include <stdio.h>

int main()
{
	char s[101];
	scanf("%s",s);
	if(s[1]=='B') s[1]='R';
	else if(s[1]=='R') s[1]='B';
	
	printf("%s\n",s);
	
	return 0;
}