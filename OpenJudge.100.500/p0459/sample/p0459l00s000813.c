#include<stdio.h>

void main()
{
	int scanCheck = 0;
	int x, y;
	int turu, kame;


	scanCheck = scanf("%d", &x);
	scanCheck = scanf("%d", &y);

	turu = 2 * x - 0.5 * y;
	kame = 0.5 * y - x;
	if ((turu < 0) || (kame < 0)) {
		printf("No");
	}
	else if ((turu + kame == x) && (2 * turu + 4 * kame == y)) {
		printf("Yes");
	}
	else {
		printf("No");
	}
}