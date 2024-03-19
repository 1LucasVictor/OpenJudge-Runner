#include<stdio.h>
#include<string.h>

int main() {
	char s[1000];
	char command[10];
	int a, b;
	char p[1000];
	int q;
	scanf("%s", s);
	scanf("%d", &q);
	for (int i = 0; i < q; i++) {
		scanf("%s", &command);
		if (!strcmp(command, "replace")) {
			scanf("%d %d %s", &a, &b, p);
			for (int j = a; j <= b; j++) {
				s[j] = p[j - a];
			}
		}
		else if (!strcmp(command, "reverse")) {
			scanf("%d %d", &a, &b);
			for (int j = a; j <= b; j++) {
				p[j] = s[j];
			}
			for (int j = a; j <= b; j++) {
				s[j] = p[b + a - j];
			}
		}
		else if (!strcmp(command, "print")) {
			scanf("%d %d", &a, &b);
			for (int j = a; j <= b; j++) {
				printf("%c", s[j]);
			}
			printf("\n");
		}
	}
	return 0;
}
