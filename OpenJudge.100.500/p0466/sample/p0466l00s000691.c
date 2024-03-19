#include <stdio.h>
#include<string.h>

int main() {
	int i;
	char a[16];
	char b[16];
	scanf("%s", &a,16);
	scanf("%s", &b,16);
	//printf("入力された文字列は：%s, %s\n", a, b);
	for (i = 0; a[i] != '\0'; ++i);

	if (strncmp(a,b,i) == 0) {
		printf("Yes\n");
	}
	else {
		printf("No\n");
	}

	return 0;
}
