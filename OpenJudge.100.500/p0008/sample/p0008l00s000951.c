#include <stdio.h>
#include <math.h>

#define ELETYPE int

#define MAXNUM ((int)(1e6))	// MAXNUM未満を扱える
#define ELESIZE (sizeof(ELETYPE) << 3)
#define TABLESIZE ((int)(MAXNUM / ELESIZE) + 1)

int numOfBits(ELETYPE);

int main()
{
	ELETYPE table[TABLESIZE] = {3, 0}, mask = (ELESIZE - 1), shift;
	int i, j, k, f, l, n, p, num;
	int arr[] = {2, 3, 5}, max = MAXNUM >> 1;
	
	for (shift = 0; ELESIZE >> shift > 1; ++shift);
	
	for (i = 0; i < 3; ++i) {
		for (j = arr[i] << 1; j < MAXNUM; j += arr[i]) {
			table[j >> shift] |= (1 << (j & mask));
		}
	}
	
	k = 1;
	p = 7;
	while (p <= max) {
		if (p % 3 && p % 5) {
			f = 0;
			l = 1;
			for (j = 7; j * j <= p;) {
				if (!(p % j)) {
					f = 1;
					break;
				}
				j += 2 * (1 + l);
				l ^= 1;
			}
			if (!f) {
				for (i = p << 1; i < MAXNUM; i += p) {
					table[i >> shift] |= (1 << (i & mask));
				}
			}
		}
		
		p += 2 * (1 + k);
		k ^= 1;
	}
	
	while (scanf("%d", &n) != EOF) {
		num = 0;
		max = (n >> shift);
		for (i = 0; i < max; ++i) {
		    num += numOfBits(~table[i]);
		}
		
		num += numOfBits((~table[max] & ((0xffffffff >> (ELESIZE - (n & mask) - 1)))));
		printf("%d\n", num);
	}
	
	return 0;
}

int numOfBits(ELETYPE bits)
{
	bits = (bits & 0x55555555) + (bits >> 1 & 0x55555555);
	bits = (bits & 0x33333333) + (bits >> 2 & 0x33333333);
	bits = (bits & 0x0f0f0f0f) + (bits >> 4 & 0x0f0f0f0f);
	bits = (bits & 0x00ff00ff) + (bits >> 8 & 0x00ff00ff);
	return (bits & 0x0000ffff) + (bits >>16 & 0x0000ffff);
}