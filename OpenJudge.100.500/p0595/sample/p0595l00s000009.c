#include <stdio.h>
#include <math.h>
#include <string.h>
#define pai 3.1415926535

int main(void) {
	int A, B, K;
	scanf("%d%d%d", &A, &B, &K);
	int count = 0;
	int a;
	for (int i = 1; i <= A; i++) {
		if ((A%i == 0) && (B%i == 0)) {
			count++;
			if (count == K) {
				a = i;
				break;
			}
		}
	}


	printf("%d", a);
	return 0;
}
