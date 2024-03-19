#include <stdio.h>
#include <string.h>
int min(int x, int y) { return x < y ? x : y; }
int main() {
	char s[10000];
	int Rnum = 0, Bnum = 0;
	scanf("%s", s);
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] == '0') {
			Rnum++;
		} else {
			Bnum++;
		}
	}
	printf("%d\n", min(Rnum, Bnum) * 2);
	return 0;
}