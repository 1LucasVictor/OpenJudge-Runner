#include<stdio.h>
#include<string.h>
int main() {
	char s[200], t[200];
	int i, j, length, m, k;
	while (1) {
		scanf("%s", s);
		if (s[0] == '-') {
			break;
		}
		length = strlen(s);
		scanf("%d", &i);
		for (j = 0;j < i;j++) {
			scanf("%d", &m);
			strncpy(t, s, m);
			t[m] = '\0';
			for (k = 0;k < length - m;k++) s[k] = s[k + m];
			s[k] = '\0';
			strcat(s, t);
		}
		printf("%s\n", s);
	}
	return 0;
}