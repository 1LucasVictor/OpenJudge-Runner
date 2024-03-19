#include <stdio.h>
#include <string.h>

main()
{
	char s[100];
	char t[100];
	
	int i;
	int count=0;
	
	scanf("%s",&s);
	
	scanf("%s",&t);
	
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]!=t[i])
		{
			++count;
		}
	}
	
	printf("%d",count);
	
}

		