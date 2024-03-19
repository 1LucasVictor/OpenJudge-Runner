#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char str[1000] = { 0 };
	char order[10] = { 0 };
	char p[1000] = { 0 };
	int ordercnt;
	int a, b;
	int i, j, k, temp;

	scanf("%s", str);
	scanf("%d", &ordercnt);

	for (i = 0; i < ordercnt; i++) {
		scanf("%s %d %d", order, &a, &b);

		if (strcmp(order, "print") == 0) {			//出力
			for (j = a; j <= b; j++) {
				printf("%c", str[j]);
			}
			printf("\n");
		}
		else if (strcmp(order, "reverse") == 0) {	//入れ替えソート
			k = 0;
			for (j = a; j <= b - k; j++) {
				temp = str[j];
				str[j] = str[b - k];
				str[b - k] = temp;
				k++;
			}
		}
		else if (strcmp(order, "replace") == 0) {	//文字代入
			scanf("%s", p);
			j = a;
			k = 0;
			while (j <= b) {
				str[j] = p[k];
				j++;
				k++;
				if (p[k] == '\0') {
					k = 0;
				}
			}
		}
	}

	return 0;
}
