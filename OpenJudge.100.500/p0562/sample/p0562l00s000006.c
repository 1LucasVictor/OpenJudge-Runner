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
	int A = 0, B = 0;
	int ans = 0, i = 0;
	scanf("%d %d", &A, &B);
	do {
		if (i == 0) {
			i += A;
		} else {
			i -= 1;
			i += A;
		}
		ans++;
	} while (i < B);
	printf("%d\n", ans);
    return 0;
}
