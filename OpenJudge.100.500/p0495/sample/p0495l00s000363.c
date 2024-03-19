#include <stdio.h>

int main() {
	char s1,s2,s3;
	scanf("%c%c%c", &s1, &s2, &s3);
	if (s1 == s2 && s2 == s3) printf("No");		
	else printf("Yes");

	return 0;
}