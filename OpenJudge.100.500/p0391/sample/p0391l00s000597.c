#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	char str[1001], odr[8], rev[1001], rpl[1001];
	int i, j, k, q, a, b;
	scanf("%s", str);
	scanf("%d", &q);
	for (i=0; i<q; i++) {
		scanf("%s", odr);
		if (strcmp("print", odr) == 0) {
			scanf("%d%d", &a, &b);
			for (j=0; j<b-a+1; j++) printf("%c", str[a+j]);
			puts("");
		}
		else if (strcmp("reverse", odr) == 0) {
			scanf("%d%d", &a, &b);
			for (j=0; j<b-a+1; j++) rev[j] = str[a+j];
			for (j--, k=0; j>=0; j--, k++) str[a+k] = rev[j];
		}
		else if (strcmp("replace", odr) == 0) {
			scanf("%d%d", &a, &b);
			scanf("%s", rpl);
			for (j=0; j<b-a+1; j++) str[a+j] = rpl[j];
		}
	}
	return 0;
}