#include<stdio.h>

int main(void) {
	int s[4];
	int i;

	for (i = 0;i < 4;i++) {
		scanf("%1d", &s[i]);
	}

	int count = 0;

	for (i = 0;i < 3;i++) {
		if (s[i] == s[i + 1]) {
			count++;
		}
	}

	if (count == 0) {
		printf("Good\n");
	}
	else {
		printf("Bad\n");
	}

	return 0;
}