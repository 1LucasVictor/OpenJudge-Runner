#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a, b, c, i, cnt=0;
	scanf("%d %d %d", &a, &b, &c);
	for (i = a; i <= b; i++) {
		if ((c%i) == 0){
			cnt++;
		}
	}
	printf("%d\n", cnt);
	return 0;
}