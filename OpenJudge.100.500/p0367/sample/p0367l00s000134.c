#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
main() {
	int a, b, c, cnt;

	a = 0, b = 0, c = 0,cnt = 0;
	scanf("%d %d %d", &a, &b, &c);
	for (a; a<=b; a++) {
		if ((c%a)==0) cnt = cnt + 1;
	}
	printf("%d\n", cnt);

	return 0;
}
