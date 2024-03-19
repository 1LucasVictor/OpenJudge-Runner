#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SIZE (50000000)

int main(void) {
	long i, j, end1, end2;
	long n, d, c;
	char *num;
	
	num = (char *)calloc(SIZE, sizeof(char));
	
	
	end1 = (long)sqrt((double)SIZE);
	for (i = 3; i < end1; i += 2) {
		if (!num[i]) {
			end2 = SIZE / i;
			for (j = 3; j < end2; j += 2) {
				num[i * j] = 1;
			}
		}
	}
	
	scanf("%ld", &n);
	c = 0;
	while (n-- > 0) {
		scanf("%ld", &d);
		if (d & 1) { 
			if (!num[d]) {
				c++;
			}
		} else {
			if (d == 2) {
				c++;
			}
		}
	}
	printf("%d\n", c);
	
	free(num);
	
	return 0;
}