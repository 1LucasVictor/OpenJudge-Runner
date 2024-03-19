#include<stdio.h>
#include<string.h>
int main()
{
	char str[20],cp[20];
	int i,len;

	scanf("%s",str);
	
	len = strlen(str);

	for(i=len;i>0;i--)
	{
		printf("%c",str[i-1]);
	}

	printf("\n");
	return 0;
}