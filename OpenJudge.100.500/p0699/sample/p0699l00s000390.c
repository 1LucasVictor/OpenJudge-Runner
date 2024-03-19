#define _CRT_SECURE_NO_WARNINGS
//#define DEBUG
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

void sort(int[], int, int, int[]);

int main(void) {
#ifdef DEBUG
	printf("");
#endif

	int A, B, C;
	int five=0, seven = 0;

	scanf("%d %d %d", &A, &B, &C);

	if (A == 5) {
		five++;
	}
	else if (A == 7) {
		seven++;
	}
	if (B == 5) {
		five++;
	}
	else if (B == 7) {
		seven++;
	}
	if (C == 5) {
		five++;
	}
	else if (C == 7) {
		seven++;
	}

	if (five == 2 && seven == 1) {
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}

	return 0;
}