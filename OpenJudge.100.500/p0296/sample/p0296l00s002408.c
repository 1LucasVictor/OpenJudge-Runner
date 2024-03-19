#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int kazu[200], i = 0;
	char siki[200];

	while (scanf("%s", siki) != EOF) {
		switch (siki[0]) {
		case '+':
			kazu[i - 2] += kazu[i - 1];
			i--;
			break;
		case '-':
			kazu[i - 2] -= kazu[i - 1];
			i--;
			break;
		case '*':
			kazu[i - 2] *= kazu[i - 1];
			i--;
			break;
		default:
			kazu[i] = atoi(siki);
			i++;
			break;
		}
	}

	printf("%d\n", kazu[0]);
	scanf("%s", siki);
	return 0;
}