#include <stdio.h>
#include <string.h>

int main () {
	char buff[64];
	char result[64];
	int length;
	
	fgets (buff, 64, stdin);
	length = strlen(buff);

	int i, j;
	for (i = length - 2, j = 0; i >= 0; i--, j++) {
		result[j] = buff[i];
	}
	result[j] = '\0';
	printf ("%s\n", result);
	
	return 0;
}

