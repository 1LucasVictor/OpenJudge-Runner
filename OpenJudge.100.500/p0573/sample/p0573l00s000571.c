#include <stdio.h>

int main() {
	char S[4], a = ' ', b = ' ', i;
	int acount = 0, bcount = 0;

	scanf("%s", S);

	for (i = 0; i < 4; i++) {
		if (S[i] == a) {
			acount++;
		}
		else if (S[i] == b) {
			bcount++;
		}
		else if (a != ' ') {
			b = S[i];
		}
		else {
			a = S[i];
		}
	}

	if (acount == 1 && bcount == 1) {
		printf("Yes");
	}
	else {
		printf("No");
	}

	return 0;
}