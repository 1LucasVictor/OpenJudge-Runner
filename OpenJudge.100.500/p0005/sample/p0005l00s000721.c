#include <stdio.h>
#include <string.h>
int main()
{
    int i,len;
    char str[20];
	char temp;
	scanf("%s",&str);
	len=strlen(str);
	for(i=0;i<len/2;i++)
	{
		temp=str[i];
		str[i]=str[strlen(str)-1-i];
		str[strlen(str)-1-i]=temp;
	}
	for (i=0;i<len;i++)
	{
		printf("%c",str[i]);
	}
	printf("\n");
    return 0;
}