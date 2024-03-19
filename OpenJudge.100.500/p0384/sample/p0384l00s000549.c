#include<stdio.h>
int main(void) {
	char a[1200];
	int i = 0;
	while (1) {
		scanf("%c", &a[i]);
		if (a[i] == '\n') break;
		i++;
	}
	for (i = 0; a[i] != '\n'; i++) {
		if ('A' <= a[i] && a[i] <= 'Z') a[i] += 'a' - 'A';
		else if ('a' <= a[i] && a[i] <= 'z') a[i] += 'A' - 'a';
		putchar(a[i]);
	}
	puts("");
	return 0;
}
