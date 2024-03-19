#include <stdio.h>
#include <string.h>

char r[100], f[100];

int main() {
	scanf("%s %s",r,f);
	int c= 0;
	int len = strlen(r);
	for (int i = 0; i < len; i++) {
		if (r[i] != f[i]) {
			c++;
		}
	}
	printf("%d\n", c);
	return 0;
}