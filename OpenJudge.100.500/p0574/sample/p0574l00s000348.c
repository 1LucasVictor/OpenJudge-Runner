#include <stdio.h>
int main(void){
	char s1, s2, s3, s4;
	scanf("%c%c%c%c", &s1, &s2, &s3, &s4);
	if (s1 == s2 || s2 == s3 || s3 == s4) printf("Bad");
	else printf("Good");

	return 0;
}