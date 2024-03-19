#include <stdio.h>
#include <string.h>

int main(void) {
	char str[1001]={};
	char replace[8]={}, reverse[8]={}, print[8]={};
	int n, a, b;
	scanf("%s", str);
	scanf("%d", &n);
	strcpy(replace, "replace");
	strcpy(reverse, "reverse");
	strcpy(print, "print");
	int i;
	for (i=1; i<=n; i++)
	{
		char command[8]={};
		scanf("%s", command);
		if (strcmp(command, replace)==0)
		{
			char rep[1001]={};
			scanf("%d%d%s", &a, &b, rep);
			int j;
			for (j=a; j<=b; j++)
			{
				str[j]=rep[j-a];
			}
			
		} else if (strcmp(command, reverse)==0)
		{
			scanf("%d%d", &a, &b);
			char rev[1001]={};
			int j;
			for (j=b; j>=a; j--)
			{
				rev[b-j]=str[j];
			}
			for (j=a; j<=b; j++)
			{
				str[j]=rev[j-a];
			}
			
		} else if (strcmp(command, print)==0)
		{
			scanf("%d%d", &a, &b);
			int j;
			for (j=a; j<=b; j++)
			{
				printf("%c", str[j]);
			}
			printf("\n");
		}
	}
	return 0;
}