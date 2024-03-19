#include<stdio.h>
#include<string.h>

int main() {
	char s[11], t[12];
	scanf("%s\n", s);
	scanf("%s", t);
	if (strlen(t) == strlen(s) + 1) {
		t[strlen(s)] = 0;
		if (strcmp(t, s) == 0) {
			printf("Yes");
			return 0;
		}
		printf("No");
		return 0;
	}
	printf("No");

	return 0;
}