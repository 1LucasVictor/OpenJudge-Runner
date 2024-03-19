#include <stdio.h>
#include <string.h>

int main()
{
	int i,len;
	char str[21];
	
	scanf("%s",str);
	len=strlen(str);
	
	for(i=len-1;i>=0;i--)
		printf("%c",str[i]);
		
	return 0;	
}
