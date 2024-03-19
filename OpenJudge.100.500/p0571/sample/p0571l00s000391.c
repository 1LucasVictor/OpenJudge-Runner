#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>



int main()
{
	int n, a, b;

	scanf("%d %d %d", &n, &a, &b);

	if (n * a <= b) {
		printf("%d", n * a);
	}
	else printf("%d", b);


	

}
