/*
 * main.c
 *
 *  Created on: 2019/07/21
 *      Author: family
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int A = 0, B = 0, C = 0;
	int ans = 0;
	scanf("%d %d %d", &A, &B, &C);
	ans = C - (A-B);
	if (ans < 0) {
		ans = 0;
	}
	printf("%d\n", ans);
    return 0;
}
