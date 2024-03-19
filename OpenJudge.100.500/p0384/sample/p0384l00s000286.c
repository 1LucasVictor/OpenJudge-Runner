#include <stdio.h>
int main(void) {
	char mj[1200];
	int t, i = 0;

	while ((mj[i] = getchar()) != EOF) {
		i++;
	}
	
	for (t = 0; t < i; t++) {
		if (mj[t] >= 'A' && mj[t] <= 'Z') {
			mj[t] += 0x20;
		}
		else if (mj[t] >= 'a' && mj[t] <= 'z') {
			mj[t] -= 0x20;
		}

		printf("%c", mj[t]);
	}

	return 0;
}