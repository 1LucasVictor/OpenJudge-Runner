#include <stdio.h>
#include <string.h>

#define true 1
#define false 0

int isParallel(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4);

int main() {
	int count = 0;
	int n = 0;
	float x1, y1, x2, y2, x3, y3, x4, y4;
	scanf("%d", &n);
	while(count < n) {
		scanf("%f %f %f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
		if (isParallel(x1, y1, x2, y2, x3, y3, x4, y4)) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
		count++;
	}
}

int isParallel(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4) {

	int ix1, iy1, ix2, iy2, ix3, iy3, ix4, iy4;

	ix1 = (int)(x1 * 100000);
	iy1 = (int)(y1 * 100000);
	ix2 = (int)(x2 * 100000);
	iy2 = (int)(y2 * 100000);
	ix3 = (int)(x3 * 100000);
	iy3 = (int)(y3 * 100000);
	ix4 = (int)(x4 * 100000);
	iy4 = (int)(y4 * 100000);

	if (ix1 == ix2) {
		if (ix3 == ix4) {
			return true;
		}
	} else {
		if (ix3 == ix4) {
			return false;
		}
		return (iy2-iy1)*(ix4-ix3) == (iy4-iy3)*(ix2-ix1);
	}
}