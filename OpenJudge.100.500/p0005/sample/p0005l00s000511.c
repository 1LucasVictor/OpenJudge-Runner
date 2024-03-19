#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[20];
	int i = 0;
	int len = 0;
	
	scanf("%s", str);
	
	while (str[len] != '\0'){
		len++;
	}
	
	for (i = len - 1; i >= 0; i--){
		printf("%c", str[i]);
	}
	
	return (0);
}