#include <stdio.h>
#include <math.h>

#define TOP 1
#define BOTTOM -1

#define RIGHT 1
#define LEFT -1

#define CENTER 0

int circle_in_rectangle(int, int, int, int, int);

int main(void) {
	int W, H;
	int x, y, r;

	scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);

	if (circle_in_rectangle(W, H, x, y, r)) {
		printf("Yes\n");
	} else {
		printf("No\n");
	}

	return 0;
}

int circle_in_rectangle(int W, int H, int x, int y, int r) {
	if (x < 0 || H < x) return 0;
	if (y < 0 || H < y) return 0;
	if (x - r < 0 || x + r > W || y - r < 0 || y + r > H) return 0;
	else return 1;
}
