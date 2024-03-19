#include<stdio.h>
#include<math.h>
#include <string.h>


int main() {
	int i, j, k;
	long long int l = 0;
	int m, g = 0, n, q;
	int f = 0;
	int s[110], c[110], a[5] = {11,11,11,11,11};


	scanf("%d %d", &n, &m);

	for (i = 0;i < m;i++) {
		scanf("%d %d", &s[i], &c[i]);
		if (s[i] == 1) {
			if (c[i] == 0) {
				f = 1;
			}
		}
		if (a[s[i]-1] != 11) {
			if (a[s[i]-1] != c[i]) {
				f = 1;
			}
		}
		else {
			a[s[i]-1] = c[i];
		}
	}

	if (a[0] == 11) {
		a[0] = 1;
	}

	for (i = n - 2;i >= 0;i--) {
		if (a[i] == 11) {
			a[i] = 0;
		}
	}

	if (f == 1) {
		printf("-1");
		return 0;
	}

	for (i = 0;i <n;i++) {
		printf("%d", a[i]);
	}

	return 0;
}