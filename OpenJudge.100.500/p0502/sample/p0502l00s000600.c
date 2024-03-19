#include <stdio.h>
int abc(int i) {
	int n;
	scanf("%d", &n);

	return n;
}
int main(void) {
	int i, n, r = 0;

	scanf("%d", &n);

	int s[100];

	for (i = 0; i < n; i++) {
		s[i] = abc(i);
	}
	for (i = 0; i < n && r == 0; i++) {
		if (s[i] % 2 == 0) {
			if ((s[i] % 3) != 0 && (s[i] % 5) != 0) {
				r = 1;
			}
		}
	}
	if (r == 0)
		puts("APPROVED");

	else
		puts("DENIED");

	return 0;
}