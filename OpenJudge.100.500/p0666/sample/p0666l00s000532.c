#include <stdio.h>

int main() {
	int x, a, b, judge;
	
	scanf("%d%d%d", &x, &a, &b);
	judge = b-a;
	
	if (judge < 0) printf("delicious\n");
	else if (judge <= x) printf("safe\n");
	else printf("dangerous\n");
	
	return 0;
}