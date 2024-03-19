#include <stdio.h>
#include <string.h>

char real[10000], fake[10000];

int main() {
	scanf("%s %s",real,fake);
	int correct = 0;
	int len = strlen(real);
	for (int i = 0; i < len; i++) {
		if (real[i] != fake[i]) {
			correct++;
		}
	}
	printf("%d\n", correct);
	return 0;
}