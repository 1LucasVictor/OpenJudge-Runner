#include <stdio.h>

int main() {
	char a[3];
	scanf("%s", a);
	if (a[0] == 'A'&&a[1]=='B'&&a[2]=='C') {
		printf("ARC");
	}
	else if (a[0] == 'A' && a[1] == 'R' && a[2] == 'C') {
		printf("ABC");
	}
	return 0;
	}