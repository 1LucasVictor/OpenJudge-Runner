#include <stdio.h>
#include <string.h>

int main()
{
	int lenth,i;
	char s[10];
	char s1[11];
	
	scanf("%s",s);
	scanf("%s",s1);
	
	lenth = strlen(s);
	
	for(i = 0;i < lenth;i++)
		if(s[i] != s1[i])
			break;
			
	if(i == lenth)
		printf("Yes\n");
	else printf("No\n");
	
	return 0;
}