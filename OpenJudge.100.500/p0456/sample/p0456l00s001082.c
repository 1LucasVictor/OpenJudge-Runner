#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	int ans = 0;
	char s[200000];
	char t[200000];
	int i;

	fgets(s, sizeof(s), stdin);

	fgets(t, sizeof(t), stdin);

	for(i=0; i<strlen(s); i++) {
		if(s[i] != t[i]) {
			ans = ans + 1;
		}
	}

	printf("%d", ans);

	return 0;
}