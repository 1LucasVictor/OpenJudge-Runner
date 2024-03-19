#include <stdio.h>

int main(void)
{
	char str[1000];
	char cstr[1000];
	int j;
	int i;
	
	scanf("%s", str);
	
	for (i = 0; str[i] != '\0'; i++);
	for (j = 0;i > 0; i--){
		cstr[j] = str[i - 1];
		j++;
	}
	cstr[j] = '\0';
	
	printf("%s", cstr);
	return (0);
}