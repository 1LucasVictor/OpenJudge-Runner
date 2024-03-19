#include <stdio.h>

int compare(const void *a, const void *b) {
	char x = *(char *)a;
	char y = *(char *)b;
	if(x == y) {
		return 0;
	} else if(x > y) {
		return -1;
	} else {
		return 1;
	}
}

int main() {
	char input[5];

	scanf("%s", &input);

	qsort(input, 5, sizeof(char),compare);

	if(input[0] == input[1] && input[2] == input[3]) {
		printf("Yes\n");
	} else {
		printf("No\n");
	}

	return 0;
}

