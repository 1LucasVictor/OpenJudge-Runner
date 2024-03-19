#include<stdio.h>
#define  _CRT_SECURE_NO_WARNINGS

int main(void) {
	int a, b, c, i;
	scanf("%d%d%d", &a, &b, &c);
        if(a==b)
          return 0;

	int x = 0;
	for (i = a; i < b; i++) {
		if (c%i == 0)
			x += 1;
	}

	printf("%d\n", x);

	return 0;
}