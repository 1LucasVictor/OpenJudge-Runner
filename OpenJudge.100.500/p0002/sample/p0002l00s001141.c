#include<stdio.h>

int main(void) {
	int a, b, c, N, i;

	scanf("%d",&N);
	
	for (i = 0; i < N; i++) {
		scanf("%d %d %d", &a, &b, &c);
		int A = a*a;
		int B = b*b;
		int C = c*c;
		if ((A + B == C) || (B + A == C )|| (C + A == B)) {
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}