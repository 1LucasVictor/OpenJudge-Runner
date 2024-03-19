#include <stdio.h>

int main() {
	int A,B;
	scanf("%d %d",&A,&B);
	int tmp1 = A/10, tmp2 = B/10;
	if (tmp1 > 0 || tmp2 > 0) printf("-1\n");
	else printf("%d\n",A*B);
	return 0;
}