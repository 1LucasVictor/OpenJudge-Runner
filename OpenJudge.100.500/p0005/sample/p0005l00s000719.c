#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[21];
	int i;
	
	while (scanf("%s", str) != EOF){
		scanf("%s", str);
		for (i = strlen(str); i >= 0; i--){
			if ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
				printf("%c", str[i]);
			}
		}
		printf("\n");
	}
	
	return (0);
}