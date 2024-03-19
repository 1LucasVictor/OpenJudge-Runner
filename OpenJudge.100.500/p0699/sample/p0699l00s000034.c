#include<stdio.h>

int main() {
	int A, B, C;
	int i = 1;
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);

	if (A == 7)
		if (B == 5 && C == 5) {
			printf("YES");
			i = 0;
		}
	if (B == 7)
		if (A == 5 && C == 5) {
			printf("YES");
			i = 0;
		}
	if(C==7)
		if (B == 5 && A == 5) {
			printf("YES");
			i = 0;
		}
	if (i != 0) printf("NO");

	return 0;
}