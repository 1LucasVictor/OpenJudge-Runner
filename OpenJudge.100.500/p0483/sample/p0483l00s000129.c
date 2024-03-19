#include <stdio.h>
#include <string.h>

int main() {
	char n[4];
	char* adr1;
	scanf("%s", n);
	// 7が含まれているかどうか
	adr1 = strchr(n, '7');
	if (adr1 == NULL) printf("No");
	else printf("Yes");
	return 0;
}