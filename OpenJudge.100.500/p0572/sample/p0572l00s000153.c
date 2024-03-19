#include <stdio.h>

int main(void) {

	int L, R;
	scanf("%d%d", &L, &R);
	if (R / 2019 - (L-1) / 2019 > 0) {
		printf("%d", 0);
	}
	else {
		printf("%d", (L % 2019)*((L + 1) % 2019));


	}

	return 0;

}