#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int x, y, z, a = 0;
	scanf("%d %d %d", &x, &y, &z);
	if (x == y && y == z) {
		a = 1;
	}
	else {
		for (int i = 1; i <= z; i++) {
			if (z % i == 0 && x <= i && i <= y)
				a++;
		}
	}printf("%d\n", a);
	return 0;
}
