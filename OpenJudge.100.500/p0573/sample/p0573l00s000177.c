#include <stdio.h>
#include <string.h>
#define lop(i, n) for(i=1; i<=n; i++)

int main()
{
	char s[4];
	
	scanf("%s", s);
	
	if(s[0] == s[1] && s[1] != s[2] && s[2] == s[3])printf("Yes\n");
	else if(s[0] == s[2] && s[2] != s[1] && s[1] == s[3])printf("Yes\n");
	else if(s[0] == s[3] && s[3] != s[1] && s[1] == s[2])printf("Yes\n");
	else printf("No\n");
	
return 0;
}