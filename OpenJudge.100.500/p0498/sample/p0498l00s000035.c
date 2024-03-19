#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS

int main(void) {
	int N;
	scanf("%d", &N);
	printf("%d", (N / 2) + (N % 2));
	return 0;
}