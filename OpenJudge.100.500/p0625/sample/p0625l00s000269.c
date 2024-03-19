#include <stdio.h>

int main(int argc, char** argv) {
	int a, b;
	scanf("%d %d", &a, &b);

	if (a > 8 || b > 8) {
		printf(":(\n");
		return 0;
	}
	printf("Yay!\n");
	return 0;
}