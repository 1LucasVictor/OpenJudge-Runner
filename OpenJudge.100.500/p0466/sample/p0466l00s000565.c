#include <stdio.h>
#include <stdlib.h>
main()
{
	char s[100];
	char t[100];
	
	scanf("%s",&s);
	scanf("%s",&t);
	
	int k;
	
	int count=0;
	
	k=strlen(s);
	
	int i;
	
	for(i=0;i<k;i++)
	{
		if(s[i]==t[i])
		{
			++count;
		}
	}
	
	if(count==k)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	
	
}

		