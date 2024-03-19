#include <stdio.h>
int main(void) {
	int A, B;
	char s[3];
	scanf("%s", &s);
	if (s[0] == s[1] && s[1] == s[2])
		printf("NO");
	else
		printf("Yes");
	return 0;
}