#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[21];
	char rts[21];
	int i;
	int strl = 0;

	scanf("%s", str);
strl =  strlen(str);
	

	for (i = 0; i < strl; i++)
	{
		rts[strl - i -1] = str[i];
	}

	rts[strl] = '\0';
	
	printf("%s", rts);
	
	return 0;
}