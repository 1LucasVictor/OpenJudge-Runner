#include <stdio.h>
int main() {
	char s[4];
	scanf("%s", s);
	int flag = 1;
	for (int i = 0; i < 3; i++) {
		if (s[i] == s[i + 1]) {
			printf("Bad");
			flag = 0;
			break;
		}
	}
	if (flag) 
		printf("Good");
	return 0;
}
