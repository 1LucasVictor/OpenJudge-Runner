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

typedef unsigned long long int uint64_t;


int main()
{
	uint64_t L = 0, R = 0, ans = 2019, i = 0, j = 0;
	scanf("%llu %llu", &L, &R);
	for(i = L; i <= R; i++) {
		if(R < i) {
			break;
		}
		j = ((i) * (i+1))%2019;
        if(j < ans) {
        	ans = j;
        }
	}
	printf("%llu\n",ans);
    return 0;
}
