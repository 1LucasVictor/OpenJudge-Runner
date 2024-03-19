#include <stdio.h>

int main() {
	int a, b, c, k5, k7;

	scanf("%d%d%d", &a, &b, &c);
	k5 = k7 = 0;
	if (a == 5)
		k5++;
	else if (a == 7)
		k7++;
	if (b == 5)
		k5++;
	else if (b == 7)
		k7++;
	if (c == 5)
		k5++;
	else if (c == 7)
		k7++;
	printf(k5 == 2 && k7 == 1 ? "YES\n" : "NO\n");
	return 0;
}
