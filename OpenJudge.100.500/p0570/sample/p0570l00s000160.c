#include <stdio.h>

int main() {
	int A, B;
	scanf("%d %d",&A,&B);
	if ((double)(A + B) / 2 == (A + B) / 2) {
		printf("%d\n",(A + B) / 2);
	}
	else printf("IMPOSSIBLE\n");
	return 0;
}
