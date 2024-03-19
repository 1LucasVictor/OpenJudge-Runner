#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[21];
	char reverse[21];
	int i;
	int len;
	
	scanf("%s", str);
	
	len = strlen(str);
	len--;
	
	for (i = 0; len >= 0; i++){
		reverse[i] = str[len];
		len--;
	}
	len = strlen(str);
	reverse[len] = '\0';
	
	printf("%s\n", reverse);
	
	return (0);
}