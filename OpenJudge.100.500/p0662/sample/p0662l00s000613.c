#include <stdio.h>

int main(void) {
	int a, b, c, d;
	int ans = 0;

	scanf("%d %d %d %d", &a,&b,&c,&d);
	if (a > c){
		int tmp = a;
		a = c;
		c = tmp;
		tmp = b;
		b = d;
		d = tmp;
	}

	if (c < b) {
		if (d <= b) ans = d - c;
		else ans = b - c;
	}

	printf("%d\n", ans);

	return 0;
}