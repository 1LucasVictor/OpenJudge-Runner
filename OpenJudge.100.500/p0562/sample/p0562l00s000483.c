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
	int ans = 0, outlet = 1;
	scanf("%d %d", &A, &B);
	if (outlet < B) {
		do {
			outlet--;
			outlet += A;
			ans++;
		} while (outlet < B);
	}
	printf("%d\n", ans);
    return 0;
}
