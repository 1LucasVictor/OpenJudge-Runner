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
	int N = 0;
	int i = 0, ans = 0;
	scanf("%d", &N);
	for (i = 1; i < 10; i++) {
		int j = 0;
		j = N/i;
		if (((i * j) == N) && (j < 10))  {
			ans++;
		} else {
		}
	}
	if (ans != 0) {
		printf("Yes\n");
	} else {
		printf("No\n");
	}
    return 0;
}
