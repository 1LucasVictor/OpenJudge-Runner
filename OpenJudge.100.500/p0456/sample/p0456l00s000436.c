#include<stdio.h>
#include<string.h>
int main() {

	int n, i, c=0;
	char s[20000], t[20000];

	scanf("%s", s);
	scanf("%s", t);

	n = strlen(s);

	for (i = 0; i < n; i++) {
		if (s[i] != t[i]) {
			c++;
		}
	}

	printf("%d", c);

	return 0;
}