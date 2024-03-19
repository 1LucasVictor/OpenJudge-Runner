#include<stdio.h>

int dist(int a, int b, int c, int prev, int head)
{
	int ret = 0;
	if (a == 0 && b == 0 && c == 0) {
		if (prev == head) {
			return 0;
		} else {
			return 1;
		}
	}
	if (a != 0 && prev != 1) {
		if (dist(a-1, b, c, 1, (head == -1 ? 1 : head))) {
			ret = 1;
		}
	}
	if (b != 0 && prev != 2) {
		if (dist(a, b-1, c, 2, (head == -1 ? 2 : head))) {
			ret = 1;
		}
	}
	if (c != 0 && prev != 0) {
		if (dist(a, b, c-1, 0, (head == -1 ? 0 : head))) {
			ret = 1;
		}
	}
	return ret;
}

int main()
{
	int a,b,c,ret;
	scanf("%d %d", &a, &b);
	c = 16 - a - b;

	if (dist(a, b, c, -1, -1)) {
		printf("Yay!");
	} else {
		printf(":(");
	}
	return 0;
}
