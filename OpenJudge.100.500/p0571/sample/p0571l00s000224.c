/*
 * main.c
 *
 *  Created on: 2019/07/07
 *      Author: family
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int N = 0, A = 0, B = 0, ans = 0;
	scanf("%d %d %d", &N, &A, &B);
	if((A*N) < B) {
		ans = (A*N);
	} else {
		ans = B;
	}

    printf("%d\n",ans );
    return 0;
}
