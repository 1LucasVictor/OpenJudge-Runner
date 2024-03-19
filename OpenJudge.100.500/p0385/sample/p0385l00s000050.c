#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 1200

int main() {
	char str[N],buf[2];
	char *p;
	int sum;
	while (1) {
		scanf("%s",str);
		if (str[0] == '0')break;
		sum = 0;
		p = str;
		while (*p) {
			sum += atoi(strncpy(buf,p++,1));
		}
		printf("%d\n", sum);
	}
	return 0;
}