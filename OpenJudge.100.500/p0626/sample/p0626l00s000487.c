#include<stdio.h>
int main() {
	int d, n,ans;
	scanf("%d %d", &d, &n);
	switch (d) {
	case 0:
		ans = n * 1;
		if (n == 100) {
			ans = 101;
		}
		break;
	case 1:
		ans = n * 100;
		if (n == 100) {
			ans = 10100;
		}
		break;
	case 2:
		ans = n * 10000;
		if (n == 100) {
			ans = 101000;
		}
		break;
	}
	printf("%d\n", ans);
}
