#include<stdio.h>
#include<limits.h>
int main() {
	int n, temp, a, i;
	long sum = 0, min = LONG_MAX, max = LONG_MIN;
	scanf("%d", &n);
	for (i = 0; i<n; i++) {
		scanf("%d", &a);
		sum += a;
		if (min>a) {
			min = a;
		}
		if (max<a) {
			max = a;
		}
	}
	printf("%ld %ld %ld\n", min, max, sum);
}
