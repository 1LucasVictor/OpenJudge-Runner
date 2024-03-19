#include <stdio.h>

int main() {
	static char s[5];

	scanf("%s", s);
	printf(s[0] == s[1] || s[1] == s[2] || s[2] == s[3] ? "Bad\n" : "Good\n");
	return 0;
}
