#include <stdio.h>

#ifndef min
#define min(a, b)            (((a) < (b)) ? (a) : (b))
#endif

void swap(int *x, int *y)
{
	int a = *x;
	int b = *y;
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
	return;
}
int gcd(int x, int y)
{
	int r;

	if ( x < y ) {
        swap(&x, &y);
	}
	while (y > 0) {
        r = x % y;
        x = y;
        y = r;
	}

    return x;
}

int main(void)
{
	int A;
	int B;

	int ans;
	
	scanf("%d %d", &A, &B);

	ans = gcd(A, B);

	printf("%d\n", ans);
	return 0;
}