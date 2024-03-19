#include <stdio.h>

int main(void)
{
	char str[1001], o[8];
	int q, a, b;
	scanf("%s", str);
	scanf("%d", &q);
	for (int i = 0; i < q; i++) {
		scanf("%s", o);
		scanf("%d %d", &a, &b);
		if (o[0] == 'p') {
			for (int j = a; j <= b; j++ ) {
				printf("%c", str[j]);
			}
			printf("\n");
		} else if (o[2] == 'p') {
			char p[b - a + 2];
			scanf("%s", p);
			for (int j = 0; j < b - a + 1; j++) {
				str[a + j] = p[j];
			}
		} else {
			char tmp[b - a + 1];
			for (int j = 0; j < b - a + 1; j++) {
				tmp[j] = str[b - j];
			}
			for (int j = 0; j < b - a + 1; j++) {
				str[j + a] = tmp[j];
			}
		}
	}
	return 0;
}

