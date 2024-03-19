#include <stdio.h>

int main(void) {
	int string[3];
	int cnt5 = 0, cnt7 = 0;
	scanf("%d %d %d", &string[0], &string[1], &string[2]);
	for (int i = 0; i < 3; i++) {
		if (string[i] == 5)
			cnt5++;
		else if (string[i] == 7)
			cnt7++;
	}
	if (cnt5 == 2) {
		if (cnt7 == 1)
			printf("YES");
	}
	else
		printf("NO");
	return 0;
}