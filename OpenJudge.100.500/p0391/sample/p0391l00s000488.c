#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	char str[1001], odr[2020], rev[1001], rpl[1001], out[1001];
	char* token;
	int i, j, k, q, a, b;
	scanf("%s", str);
	scanf("%d", &q);
	for (i=0; i<q; i++) {
		scanf("%s", odr);
		token = strtok(odr, " ");
		while (token != NULL) {
			if (strcmp("print", token) == 0) {
				scanf("%d", &a);
				scanf("%d", &b);
				strncpy(out, str+a, b-a+1);
				out[b+1] = '\0';
				printf("%s\n", out);
			}
			else if (strcmp("reverse", token) == 0) {
				scanf("%d", &a);
				scanf("%d", &b);
				for (j=0; j<b-a+1; j++) {
					rev[j] = str[a+j];
				}
				for (j--, k=0; j>=0; j--, k++) {
					str[a+k] = rev[j];
				}
			}
			else if (strcmp("replace", token) == 0) {
				scanf("%d", &a);
				scanf("%d", &b);
				scanf("%s", rpl);
				for (j=0; j<b-a+1; j++) {
					str[a+j] = rpl[j];
				}
			}
			token = strtok(NULL, " ");
		}
	}
	return 0;
}