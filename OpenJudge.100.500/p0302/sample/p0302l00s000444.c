#define _CRT_SECURE_NO_WARNINGS
#define MaxSize 7629395
#include <stdio.h>
#include <stdlib.h>


void insert(unsigned int *D, unsigned int a) {
	unsigned int bitP = a % 32u;
	unsigned int mask = 1u << bitP;

	D[a / 32u] |= mask;
}

int find(unsigned int *D, unsigned int a) {
	unsigned int bitP = a % 32u;
	unsigned int mask = 1u << bitP;

	return (int)((D[a / 32u] & mask) >> bitP);

}

unsigned int conv(char s[]) {
	int i = 0;
	unsigned int a = 0u;
	while (s[i] != '\0') {
		a *= 5;
		if (s[i] == 'A') {
			a += 1u;
		}
		else if (s[i] == 'C') {
			a += 2u;
		}
		else if (s[i] == 'G') {
			a += 3u;
		}
		else {
			a += 4u;
		}
		++i;
	}
	return a;
}

int main() {
	unsigned int *D = (unsigned int *)malloc(sizeof(unsigned int) * MaxSize);
	int i;
	for (i = 0; i < MaxSize; ++i) {
		D[i] = 0u;
	}

	char com[7];
	char s[13];
	int n;
	scanf("%d", &n);
	for (i = 0; i < n; ++i) {
		scanf("%s%s", com, s);
		if (com[0] == 'i') {
			insert(D, conv(s));
		}
		else {
			if (find(D, conv(s))) {
				printf("yes\n");
			}
			else {
				printf("no\n");
			}
		}
	}


	free(D);

	return 0;
}