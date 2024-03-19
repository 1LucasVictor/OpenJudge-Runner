#include <stdio.h>
#include <string.h>
int main() {
	char n[100];
	scanf("%s", &n);
	int len = strlen(n);
	if (n[len - 1] == '3') {
		printf("bon\n");
	} else if (n[len - 1] == '0' || n[len - 1] == '1' || n[len - 1] == '6' ||
			   n[len - 1] == '8') {
		printf("pon\n");
	} else {
		printf("hon\n");
	}
	return 0;
}