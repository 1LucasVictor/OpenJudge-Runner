#include<stdio.h>

int main(void) {
	int a, b, c, n, i;

	scanf("%d",&n);
	
	for (i = 0; i < n; i++) {
		scanf("%d %d %d", &a, &b, &c);
		int A = a*a;
		int B = b*b;
		int C = c*c;
		if (A + B == C || B + A == C || C + A == B) {
			printf("YES");
		}
                else 
                      printf("NO");
	}
	return 0;
}