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
	uint64_t L = 0, R = 0, ans = 2019, i = 0, j = 0, k = 0;
	scanf("%llu %llu", &L, &R);
	for(i = L; i <= (L+(2019*2)); i++) {
		if(R < i) {
			break;
		}
		for(k = L+1; k <= (L+(2019*2)); k++) {
			if(R < k) {
				break;
			}
			j = (i * k)%(uint64_t)2019;
	        if(j < ans) {
	        	ans = j;
				//printf("%llu %llu\n", i, k);
	        }
		}
	}
	printf("%llu\n",ans);
    return 0;
}
