#include<stdio.h>

int main(void) {
	char a[4];

	scanf("%s", a);

	char s;
	int i, j;
	for (i = 0;i < 3;i++) {
		for (j = 0;j < 3;j++) {
			if (a[j] > a[j + 1]) {
				s = a[j];
				a[j] = a[j + 1];
				a[j + 1] = s;
			}
		}
	}

	if (a[0] == a[1] && a[2] == a[3] && a[0] != a[2]) {
		printf("Yes\n");
	}
	else {
		printf("No\n");
	}
	
	return 0;
}