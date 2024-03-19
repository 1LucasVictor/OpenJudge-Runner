#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

float s(float a) {
	a *= 1000;
	if (a > 0) {
		a += 0.5;
	}
	else {
		a -= 0.5;
	}
	int b = a;
	a = b;
	a /= 1000;
	return a;
}

int main() {
	float a, b, c, d, e, f;
	while (~scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f)) {
		float x, y;
		if (a != 0) {
			b *= d;
			c *= d;
			e *= a;
			f *= a;
			y = (c - f) / (b - e);
			x = (c / d - b / d * y) / a;
		}
		else {
			y = c / b;
			x = (f - e * y) / d;
		}
		printf("%.3f %.3f\n", s(x), s(y));
	}
}

