#include <stdio.h>
int n, a;
int x[200000];
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n - 1; i++) {
		scanf("%d", &a);
		a--;
		x[a] ++;
	}
	for (int i = 0; i < n; i++) {
		printf("%d\n", x[i]);
	}
}