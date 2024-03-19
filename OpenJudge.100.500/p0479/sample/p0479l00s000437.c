#include<stdio.h>
#include<math.h>

int main() {
	int n, m[200000], l;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		m[i] = 0;
	}
	for (int i = 1; i < n; i++) {
		scanf("%d", &l);
		m[l-1] = m[l-1] + 1;
	}
	for (int i = 0; i < n; i++) {
		printf("%d\n", m[i]);
	}
}