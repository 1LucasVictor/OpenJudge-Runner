#include<stdio.h>
int main() {
	int A, B, C, K;
	int i;
	int wa = 0;
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	scanf("%d", &K);
	for (i = 1; i < K; i++) {
		if (i <= A)
			wa++;
		else {
			if (i <= A+B)
				wa += 0;
			else {
				if (i <= A+B+C)
					wa -= 1;
			}
		}
	}
	printf("%d",wa);
	return 0;
}