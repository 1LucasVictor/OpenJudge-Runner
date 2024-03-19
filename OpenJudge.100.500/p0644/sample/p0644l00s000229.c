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
	int ans = 0, i = 0;
	char s[4];
	scanf("%s", s);
	for (i = 0; i < 3; i++) {
		if (s[i] == '1') {
			ans++;
		}
	}
	printf("%d\n", ans);
    return 0;
}
