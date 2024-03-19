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
	int C = 0;
	scanf("%d %d", &A, &B);
	if(A > B) {

	} else {
		int temp = B;
		B = A;
		A = temp;
	}
	C = (A - B)%2;
	if (C != 0) {
		printf("IMPOSSIBLE\n");
	} else {
		printf("%d\n", ((A - B)/2) + B);
	}
    return 0;
}
