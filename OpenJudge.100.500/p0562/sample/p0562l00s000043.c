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
		ans++;
		if (ans == 1) {
			i = ans * A;
		} else {
			i = (ans * A) - (ans - 1);
		}
	} while (i < B);
	printf("%d\n", ans);
    return 0;
}
