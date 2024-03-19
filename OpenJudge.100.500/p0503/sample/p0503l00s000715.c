#include<stdio.h>
#include<string.h>

int main() {
	int n, a[200000], f = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			if (a[i] > a[j]) {
				int t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	for (int i = 0; i < n - 1; i++) {
		if (a[i] == a[i + 1]) {
			f = 1;
		}
	}
	if (f == 0) {
		printf("YES");
	}
	else {
		printf("NO");
	}
}