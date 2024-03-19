#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
	int n = 0,k=0,c=0,u=0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int v[101] = { 0 };
		scanf("%d", &c);
		scanf("%d", &k);
		for (int j = 0; j < k; j++) {
			scanf("%d", &u);
			v[u] = 1;
		}
		for (int j = 1; j < n ; j++) {
			printf("%d ", v[j]);
		}
		for (int j = n; j < n + 1; j++) {
			printf("%d\n", v[j]);
		}
	}
}
