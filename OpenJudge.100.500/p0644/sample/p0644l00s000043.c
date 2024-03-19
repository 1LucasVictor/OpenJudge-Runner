#include<stdio.h>

int main(void){
	char s1, s2, s3;
	int ct = 0;
	scanf("%c%c%c", &s1, &s2, &s3);
	if (s1 == '1') ct++;
	if (s2 == '1') ct++;
	if (s3 == '1') ct++;
	printf("%d", ct);
}