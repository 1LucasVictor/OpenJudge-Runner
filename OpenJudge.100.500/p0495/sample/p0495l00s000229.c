
#include<stdio.h>
int main(void) {
	char a, b, c;
	scanf("%c", &a);
	scanf("%c", &b);
	scanf("%c", &c);
	if (a == b && a == c)printf("No");
	else printf("Yes");
	return 0;
}