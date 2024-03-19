#include<stdio.h>
int main() {
	int H, A, ans = 0;
	scanf("%d %d", &H, &A);
	for (H; H > 0;H-=A) {
		ans++;
	}
	printf("%d\n", ans);
	return 0;
}