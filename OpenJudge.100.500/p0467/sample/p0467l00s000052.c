#include <stdio.h>

int main(void) {
	int A = 0, B = 0, C = 0, K = 0;
	int ans = 0;
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	scanf("%d", &K);

	for (; K > 0; K--) {
		if (A!= 0) {
          A--;
			ans++;
		}
		else if (B != 0) {
B--;
		}
		else if (C != 0) {
			ans--;
          C--;
		}
	}

	printf("%d",ans);
	
	return 0;
}
