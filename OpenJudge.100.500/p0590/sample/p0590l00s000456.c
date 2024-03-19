#include <stdio.h>

int main() {

	int antena[5];
	int k;
	int i;
	int count = 0;

	for (i = 0; i < 5; i++) scanf("%d", &antena[i]);
	scanf("%d", &k);

	for (i = 0; i < 5; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (antena[j] - antena[i] > k)	count++;
		}
	}

	if (count)	printf(":(\n");
	else printf("Yay!\n");
}