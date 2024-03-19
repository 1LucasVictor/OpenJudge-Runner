#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS

int main(void) {
	char station[4];
	int res = 0;
	scanf("%s", station);
	//全てAか確認する。
	for (int i = 0;i < strlen(station);i++) {
		if (strncmp(station + i, "A", 1) != 0) {
			res = 1;
			break;
		}
	}
	if (res != 0) puts("Yes");
	if (res == 0)puts("No");
	return 0;
}