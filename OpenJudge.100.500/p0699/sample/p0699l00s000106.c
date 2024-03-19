#include<stdio.h>
int main() {
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);
	if (((A == B && A== 5) && (A != C)) || ((A == C && A == 5) && (A != B)) || ((B == C && B == 5) && (B != A))) {
		printf("YES");
	}
	else {
		printf("NO");
	}
	return 0;
}