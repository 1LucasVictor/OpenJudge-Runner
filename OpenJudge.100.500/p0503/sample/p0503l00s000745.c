#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

#define N 200000

void srand_() {
	struct timeval tv;

	gettimeofday(&tv, NULL);
	srand(tv.tv_sec ^ tv.tv_usec);
}

int rand_(int n) {
	return (rand() * 76543LL + rand()) % n;
}

int compare(const void *a, const void *b) {
	int ia = *(int *) a;
	int ib = *(int *) b;

	return ia - ib;
}

void sort(int *aa, int n) {
	int i, j, tmp;

	srand_();
	for (i = 0; i < n; i++) {
		j = rand_(i + 1);
		tmp = aa[i], aa[i] = aa[j], aa[j] = tmp;
	}
	qsort(aa, n, sizeof *aa, compare);
}

int main() {
	static int aa[N];
	int n, i;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &aa[i]);
	sort(aa, n);
	for (i = 0; i + 1 < n; i++)
		if (aa[i] == aa[i + 1]) {
			printf("NO\n");
			return 0;
		}
	printf("YES\n");
	return 0;
}
