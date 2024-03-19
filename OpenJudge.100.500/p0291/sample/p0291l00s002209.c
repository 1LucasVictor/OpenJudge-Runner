#include <stdio.h>

int main(void) {
	int max = -1, bottom, now, before;
	scanf("%d", &before);
	scanf("%d", &before);
	bottom = before;
	while (scanf("%d", &now) != EOF) {
		if (now < before && bottom > now) bottom = now;
		if (max < now - bottom) max = now - bottom;
		before = now;
	}
	printf("%d\n", max);
}