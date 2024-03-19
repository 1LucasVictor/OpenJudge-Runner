/*
 * main.c
 *
 *  Created on: 2019/06/22
 *      Author: family
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	char S[5] = {0};
	int ans = 0;
	scanf("%s", S);
	if(S[0] == S[1]) {
		ans++;
	}
	if(S[1] == S[2]) {
		ans++;
	}
	if(S[2] == S[3]) {
		ans++;
	}
	if(ans != 0) {
		printf("Bad\n");
	} else {
		printf("Good\n");
	}
    return 0;
}
