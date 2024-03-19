#include <stdio.h>
int main(void) {
	char a[5];
	int i;

	for (i = 0; i < 4; i++) {
		a[i] = getchar();
	}

	if (a[0] == a[1] && a[2] == a[3] && a[0] != a[2])
		printf("Yes");
	else if (a[0] == a[2] && a[1] == a[3] && a[0] != a[1])
		printf("Yes");
	else if (a[0] == a[3] && a[1] == a[2] && a[0] != a[1])
		printf("Yes");
	else
		printf("No");

	return 0;
}