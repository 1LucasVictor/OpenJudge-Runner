#include <stdio.h>

int main(void) {
	int N;
	if (scanf("%d", &N) != 1) return 1;
	switch (N % 10) {
		case 2: case 4: case 5: case 7: case 9:
			puts("hon");
			break;
		case 0: case 1: case 6: case 8:
			puts("pon");
			break;
		case 3:
			puts("bon");
			break;
		default:
			puts("you are an idiot");
			break;
	}
	return 0;
}
