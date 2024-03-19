#include <stdio.h>
#include <string.h>
#define int long long

#define M 1046527
#define NIL (-1)
#define L 14

char H[M][L];

int getChar(char c) {
	if (c == 'A') return 1;
	else if (c == 'C') return 2;
	else if (c == 'G') return 3;
	else if (c == 'T') return 4;
	else return 0;
}

int getKey(char str[]) {
	int sum = 0, p = 1;
	for (int i = 0; i < strlen(str); ++i) {
		sum += p * getChar(str[i]);
		p *= 5;
	}
	return sum;
}

int h1(int key) { return key % M; }

int h2(int key) { return 1 + (key % (M - 1)); }

int find(char str[]) {
	int key = getKey(str), h;
	for (int i = 0; ; ++i) {
		h = (h1(key) + i * h2(key)) % M;
		if (strcmp(H[h], str) == 0) return 1;
		else if (strlen(H[h]) == 0) return 0;
	}
	return 0;
}

int insert(char str[]) {
	int key = getKey(str), h;
	for (int i = 0; ; ++i) {
		h = (h1(key) + i * h2(key)) % M;
		if (strcmp(H[h], str) == 0) return 1;
		else if (strlen(H[h]) == 0) {
			strcpy(H[h], str);
			return 0;
		}
	}
	return 0;
}

signed main() {
	int n;
	char str[L], com[9];
	for (int i = 0; i < M; ++i) H[i][0] = '\0';
	scanf("%lld", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%s %s", com, str);

		if (com[0] == 'i') {
			insert(str);
		}
		else if (find(str)) {
			printf("yes\n");
		}
		else {
			printf("no\n");
		}
	}
}

