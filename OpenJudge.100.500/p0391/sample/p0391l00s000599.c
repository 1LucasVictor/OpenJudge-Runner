
#include<stdio.h>
#include<string.h>

int main() {
	char str[1001], tem[1001], com[10];
	int a, b, c, i, j;

	scanf("%s", &str); // ?????????
	scanf("%d", &a);   // ????????°???

	for (i = 0; i < a; i++){
		scanf("%s", &com);
		if (strcmp(com, "print") == 0) {
			scanf("%d %d", &b, &c);
			for (j = b; j < c + 1; j++) {
				putchar(str[j]);
			}
			puts("");
		}
		else if (strcmp(com, "reverse") == 0) {
			scanf("%d %d", &b, &c);
			for (j = 0; j < c - b + 1; j++) {
				tem[j] = str[c - j];
			}
			for (j = 0; j < c -b + 1; j++) {
				str[b + j] = tem[j];
			}
		}
		else if(strcmp(com, "replace") == 0) {
			scanf("%d %d %s", &b, &c, &tem);
			for (j = 0; j < c - b + 1; j++) {
				str[b + j] = tem[j];
			}
		}
	}
	return 0;
}