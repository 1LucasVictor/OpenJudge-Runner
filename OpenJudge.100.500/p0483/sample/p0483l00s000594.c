#include<stdio.h>
int main() {
	char s[4];
	scanf("%s", &s);
	int i;
	if ((s[0] == '7') || (s[1] == '7') || (s[2] == '7')) {
		printf("Yes");

	}
	else {
		printf("No");
	}

	return 0;

}
