#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[21];
	int i;
	int len;
	
	scanf("%s", str);
	
	len = strlen(str);
	
	for (i = 1; str[i-1] != '\0'; i++){
		printf("%c", str[len-i]);
	}
	printf("\n");
	
	return (0);
}