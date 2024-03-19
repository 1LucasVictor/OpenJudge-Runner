#include <stdio.h>
#include <string.h>
int main()
{
	char s[100];
	while(~scanf("%s",s))
	{
		int i,x=0;
		for(i=1;i<strlen(s);i++)
		{
			if(s[i]==s[i-1])
			{
				printf("Bad");
				x=1;
				break;
			}
		}
		if(x==0) printf("Good");
		printf("\n");
	}
}