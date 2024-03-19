#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include<stdio.h>
#include<string.h>
#define N 1200

int main() {
	char str[N];
	int i;
	fgets(str, N, stdin);

	for (i = 0; str[i] != '\n'; i++)
		if ('A' <= str[i] && str[i] <= 'Z') str[i] += 'a' - 'A';
		else if ('a' <= str[i] && str[i] <= 'z') str[i] -= 'a' - 'A';
		printf("%s", str);
	return 0;
}