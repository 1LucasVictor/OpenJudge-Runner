#include <stdio.h>

int main(void) {
	int a, b;
	
	scanf("%d %d", &a, &b);
	
	printf("%s\n", a <= 8 && b <= 8 ? "Yay!" : ":(");
	
	return 0;
}