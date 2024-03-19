#include <stdio.h>
#include <math.h>

int isRightTriangle(int a, int b, int c)
{
	if ( a * a == b * b + c * c) {
		return 1;
	}
	return 0;
}

int isRT(int a, int b, int c)
{
	return isRightTriangle(a, b, c) || isRightTriangle(b, c, a) || isRightTriangle(c, a, b);
}


int main()
{
	int n, m, i;
	int a, b, c;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d %d %d", &a, &b, &c);
		if (isRT(a, b, c)) 
			puts("YES");
		else
			puts("NO");
	}
	return 0;
}