/*
 * main.c
 *
 *  Created on: 2019/06/16
 *      Author: family
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int X = 0, A = 0, ans = 0;
	scanf("%d %d", &X, &A);
	if(X < A) {
		ans = 0;
	} else {
		ans = 10;
	}
	printf("%d\n", ans);
    return 0;
}
