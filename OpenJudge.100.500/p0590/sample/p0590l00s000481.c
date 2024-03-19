#include <stdio.h>

int main(void) {
	int i;
	int data[5];
	int k;
	for (i = 0; i < 5; i++) {
		if (scanf("%d", &data[i]) != 1) return 1;
	}
	if (scanf("%d", &k) != 1) return 1;
	puts(data[4] - data[0] <= k ? "Yay!" : ":(");
	return 0;
}
