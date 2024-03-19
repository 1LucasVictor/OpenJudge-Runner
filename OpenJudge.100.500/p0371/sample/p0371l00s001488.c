#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int n, i, a_i;
	char n_s[7];

	fgets(n_s, sizeof(n_s), stdin);
	n = atoi(n_s);

	int min = 1000000;
	int max = -1000000;
	long long int sum = 0;

	int sl = 9 * 10000;
	char str[sl], *ch;

	fgets(str, sizeof(str), stdin);

	ch = strtok(str, " \n");

	for (i = 0; i < n; i++) {
		if (ch == NULL) {
			break;
		} else {
			a_i = atoi(ch);
		}
		if (a_i < min) min = atoi(ch);
		if (a_i > max) max = atoi(ch);
		sum += a_i;
		ch = strtok(NULL, " \n");
	}

	printf("%d %d %lld\n", min, max , sum);

	return 0;
}