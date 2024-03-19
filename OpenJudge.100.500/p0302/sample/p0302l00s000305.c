#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
	int i, j, n, index = 0, foundFlag;
	char **a;
	scanf("%d", &n);
	a = malloc(sizeof(char *) * n);
	for (i = 0; i < n; i++) {
		a[i] = malloc(sizeof(char) * 13);
	}
	char command[7], arg[13];
	for (i = 0; i < n; i++) {
		foundFlag = 0;
		scanf("%s %s", command, arg);
		if (strcmp(command, "insert") == 0) {
			strcpy(a[index++], arg);
		} else if (strcmp(command, "remove") == 0) {
			for (j = 0; j < index; j++) {
				if (strcmp(a[j], arg) == 0) {
					strcpy(a[j], "\0");
				}
			}
		} else if (strcmp(command, "find") == 0) {
			for (j = 0; j < index; j++) {
				if (strcmp(a[j], arg) == 0) {
					foundFlag = 1;
				}
			}
			if (foundFlag) {
				printf("yes\n");
			} else {
				printf("no\n");
			}
		} else if (strcmp(command, "show") == 0) {
			for (j = 0; j < index; j++) {
				printf("%d %s\n", j, a[j]);
			}
		}
	}
	return 0;
}