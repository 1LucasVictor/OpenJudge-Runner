#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	char S[5] = { 0,0,0,0 ,0};
	scanf("%s", &S[0]);
	int flag = 0;

	for (int i = 0; i<3; i++) {
		if (S[i] == S[i + 1]) {
			flag = 1;
		}
	}

	if (flag == 1) {
		printf("Bad\n");
	}
	else {
		printf("Good\n");
	}

	return 0;
}