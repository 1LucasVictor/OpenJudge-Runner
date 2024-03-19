#include <stdio.h>

void func(int *x, int *y) {
	int *temp;
	
	if(y > x) {
		temp = y;
		y = x;
		x = temp;
	}
}

int max_kouyakusu(int a, int b) {
	int r;
	int temp;

	func(&a, &b);
	r = a % b;

	if(r == 0) return b;

	while(r) {
		r = a % b;
		a = b;
		b = r;
	}
	

	return a;
}

int min_koubaisu(int a, int b) {
	int max_kouyaku = max_kouyakusu(a, b);
	int x = a / max_kouyaku;
	int y = b / max_kouyaku;

	int ans = x * y * max_kouyaku;

	return ans;
}

int main() {
	int a, b;

	while(scanf("%d %d", &a, &b) != EOF) {
		printf("%d %d\n", max_kouyakusu(a, b), min_koubaisu(a, b));
	}

	return 0;
}