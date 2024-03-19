/*
 * main.c
 *
 *  Created on: 2019/03/03
 *      Author: family
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char S[100002] = {0};

int main()
{
	int i = 0;
	int len = 0;
	int ans = 0;
	int zero = 0;
	int one = 0;

	scanf("%s", S);
	len = strlen(S);
	for(i = 0; i < len; i++) {
		if(S[i] == '0') {
			zero++;
		} else {
			one++;
		}
	}

	if (zero > one) {
		ans = one;
	} else {
		ans = zero;
	}

	printf("%d\n", ans*2);
	return 0;
}
