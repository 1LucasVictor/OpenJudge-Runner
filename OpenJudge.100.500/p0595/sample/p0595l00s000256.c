#include <stdio.h>
#include <math.h>
#include <string.h>
#define pai 3.1415926535

int main(void) {
	int A, B, K;
	scanf("%d%d%d", &A, &B, &K);
	int count = 0;
	int a[100];
	if (A > B) {
		A = B;
	}
	for (int i = 1; i <= A; i++) {
		if ((A%i == 0) && (B%i == 0)) {
			a[count] = i;
			count++;
			}
		}
	
	printf("%d", a[count - K]);


	

	return 0;
}

