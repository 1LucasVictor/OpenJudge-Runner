#include <stdio.h>
#include <string.h>

int main()
{
	int lenth,lenth1;
	char s[10];
	char s1[11];
	
	scanf("%s",s);
	scanf("%s",s1);
	
	lenth = strlen(s);
	
	s1[lenth] = '\0';
	
	if(strcmp(s,s1) == 0)
		printf("Yes\n");
	else printf("No\n");
	
	return 0;
}