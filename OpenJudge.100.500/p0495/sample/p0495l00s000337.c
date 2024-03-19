#include <stdio.h>
int main(void) {
	char a, b, c;
	//printf("文字列を入力してください\n");
	scanf("%c", &a);
	scanf("%c", &b);
	scanf("%c", &c);
	if (a == b && b == c)
		printf("No");
	else
		printf("Yes");
	return 0;
}
