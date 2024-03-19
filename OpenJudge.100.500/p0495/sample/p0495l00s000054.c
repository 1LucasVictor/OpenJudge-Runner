#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS

int main(void) {
	char station[4];
	int a = 0;
	int b = 0;
	scanf("%s", station);
	for (int i = 0;i < strlen(station);i++) {
		if (strncmp(station + i, "A", 1) == 0) {
			a += 1;
		}
		if (strncmp(station + i, "B", 1) == 0) {
			b += 1;
		}
	}
	if (a != 3 && b != 3) {
		puts("Yes");
	}
	else {
		puts("No");
	}
	return 0;
}