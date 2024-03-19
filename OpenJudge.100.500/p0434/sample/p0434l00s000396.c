#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	const char *SEP = " ";
	int n;
	char input_str[256];
	char *num_str;

	fgets(input_str, sizeof(input_str), stdin);
	num_str = strtok(input_str, SEP);
	n = atoi(num_str);

	if ( 30 <= n ) {
		printf("Yes\n");
	}
	else {
		printf("No\n");
	}

	return 0;
}
