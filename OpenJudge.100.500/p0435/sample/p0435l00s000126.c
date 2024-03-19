#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	const char *SEP = " ";
	long long int n, d, sq_d, x, y, cnt = 0;
	char input_str[256];
	char *num_str;
	int i;

	fgets(input_str, sizeof(input_str), stdin);
	num_str = strtok(input_str, SEP);
	n = atoi(num_str);
	num_str = strtok(NULL, SEP);
	d = atoi(num_str);

	sq_d = d * d;
	for ( i = 0; i < n; i++ ) {
		fgets(input_str, sizeof(input_str), stdin);
		num_str = strtok(input_str, SEP);
		x = atoi(num_str);
		num_str = strtok(NULL, SEP);
		y = atoi(num_str);

		if ( (x*x) + (y*y) <= sq_d ) {
			cnt++;
		}
	}

	printf("%d\n", cnt);

	return 0;
}
