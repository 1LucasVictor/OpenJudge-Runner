#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[32];
	int i;
	
	fgets(str, sizeof(str), stdin);
	
	for (i = strlen(str) - 2; i >= 0; i--)
		printf("%c", str[i]);
	printf("\n");
	
	return 0;
}