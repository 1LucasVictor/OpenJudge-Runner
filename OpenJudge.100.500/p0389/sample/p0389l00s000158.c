#include <stdio.h>
#include <string.h>
int main() {
	char s[201], t[201], u[201];
	int i, j, k, m, h;
	while(1) {
		scanf("%s", s);
		if (s[0] == '-') break;
		scanf("%d", &m);
		for (i=0; i<m; i++) {
			scanf("%d", &h);
			for (j=0; j<h; j++) {
				t[j] = s[j];
			}
			t[h] = '\0';
			for (k=0; k<strlen(s)-h; k++) {
				u[k] = s[h+k];
			}
			u[strlen(s)-h] = '\0';
			strcat(u, t);
			strcpy(s, u);
		}
		printf("%s\n", s);
	}
	return 0;
}