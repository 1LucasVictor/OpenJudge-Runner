#include<stdio.h>
int main(void) {
	char a[100];
	int i;
	scanf("%s", a);
	for (i = 0; i < 3; i++) {
		if (a[i] == '7') {
			puts("Yes");
			return 0;
		}
	}
	puts("No");
	return 0;
}
