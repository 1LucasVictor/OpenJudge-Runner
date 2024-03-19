#include <stdio.h>
#include <string.h>
#define SIZE 21

int main(void){
	char str[SIZE] = {};
	char ch;
	int i = 0;

	i = 0;
	while ((ch = getchar()) != '\n') {
		str[i] = ch;
		i++;
		if (i >= SIZE - 1){
			break;
		}
	}

	for (i = strlen(str) - 1; i >= 0; i--){
		printf("%c", str[i]);
	}

	printf("\n");

	return 0;
}