#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

main() {
	int cnt, seed, min, max, sum;

	scanf("%d", &cnt);
	if (cnt < 0 || cnt>10000) return 1;

	sum = 0;
	for (int i = 0; i<cnt; i++) {
		scanf("%d", &seed);
		if (seed < -1000000 || seed > 1000000) { return 1; }
		if (i == 0) min = max = seed;
		if (max < seed) max = seed;
		if (min > seed) min = seed;
		sum = sum + seed;
	}
	printf("%d %d %d\n", min, max, sum);

	return 0;
}
