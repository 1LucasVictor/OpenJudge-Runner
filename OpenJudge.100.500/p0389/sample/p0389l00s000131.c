#include <stdio.h>
#include <string.h>

int main(void) {
	char buffer[2][256], *src, *dest, *tmp;
	int m, i, h, l;
	while (scanf("%255s", buffer[0]) == 1 && strcmp(buffer[0], "-") != 0) {
		src = buffer[0];
		dest = buffer[1];
		l = strlen(src);
		dest[l] = '\0';
		if (scanf("%d", &m) != 1) return 1;
		for (i = 0; i < m; i++) {
			if (scanf("%d", &h) != 1) return 1;
			memcpy(dest + l - h, src, h);
			memcpy(dest, src + h, l - h);
			tmp = src;
			src = dest;
			dest = tmp;
		}
		puts(src);
	}
	return 0;
}


