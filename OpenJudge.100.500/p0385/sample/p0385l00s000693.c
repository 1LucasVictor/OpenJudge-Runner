#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main() {
	char num[1001], c[2] = {'\0'};
	int l, i, sum;
	while(1) {
		sum = 0;
		fgets(num, 1000, stdin);
		if (num[0] == '0') break;
		l = strlen(num) - 1;
		for (i = 0; i < l; ++i) {
			c[0] = num[i];
			sum += atoi(c);
		}
		printf("%d\n", sum);
	}
	return 0;
}
