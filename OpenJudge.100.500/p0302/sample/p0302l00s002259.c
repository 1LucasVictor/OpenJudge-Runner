#define _CRT_SECURE_NO_WARNINGS
#define MaxSize 16777215
#include <stdio.h>
#include <stdlib.h>


void insert(char *D, char s[]) {
	int i = -1;
	char c;
	int p = -1;
	while (c = s[++i]) {
		switch (c) {
		case 'A':
			p *= 4;
			p += 4;
			break;
		case 'C':
			p *= 4;
			p += 5;
			break;
		case 'G':
			p *= 4;
			p += 6;
			break;
		case 'T':
			p *= 4;
			p += 7;
			break;
		}
	}
	D[p] = 'Y';
}

int find(char *D, char s[]) {
	int i = -1;
	char c;
	int p = -1;
	while (c = s[++i]) {
		switch (c) {
		case 'A':
			p *= 4;
			p += 4;
			break;
		case 'C':
			p *= 4;
			p += 5;
			break;
		case 'G':
			p *= 4;
			p += 6;
			break;
		case 'T':
			p *= 4;
			p += 7;
			break;
		}
	}
	return D[p] == 'Y';
}

int main() {
	char *D = (char *)malloc(sizeof(char) * MaxSize);
	int i;
	for (i = 0; i < MaxSize; ++i) {
		D[i] = 'N';
	}

	char com[7];
	char s[13];
	int n;
	scanf("%d", &n);
	for (i = 0; i < n; ++i) {
		scanf("%s%s", com, s);
		if (com[0] == 'i') {
			insert(D, s);
		}
		else {
			if (find(D, s)) {
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