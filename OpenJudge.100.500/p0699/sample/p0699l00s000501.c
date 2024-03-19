#include <stdio.h>

int main(void) {
	int ABC[3];
	int i;
	int go = 0, siti = 0;
	if (scanf("%d%d%d", &ABC[0], &ABC[1], &ABC[2]) != 3) return 1;
	for (i = 0; i < 3; i++) {
		if (ABC[i] == 5) go++;
		if (ABC[i] == 7) siti++;
	}
	puts(go == 2 && siti == 1 ? "YES" : "NO");
	return 0;
}
