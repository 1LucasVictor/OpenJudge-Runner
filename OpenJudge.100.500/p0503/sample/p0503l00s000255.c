/*
 * main.c
 *
 *  Created on: 2019/12/29
 *      Author: family
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX(a,b) (a > b ? a : b)
#define MIN(a,b) (a > b ? b : a)
typedef long long int ll;

int sort_inc_u(const void *a, const void *b)
{
    signed long long int da = *(signed long long int*)a;
    signed long long int db = *(signed long long int*)b;
    int val = 0;
    if(da > db) {
        val = 1;
    } else if (da == db) {
        val = 0;
    } else {
        val = -1;
    }

    return val;
}

ll A[200001] = {0};

int main()
{
	ll N = 0, i = 0, ans = 0;;
	scanf("%lld", &N);
	for (i = 0; i < N; i++) {
		ll a = 0;
		scanf("%lld", &a);
		A[i] = a;
	}

	qsort(A, N, sizeof(ll), sort_inc_u);
	for (i = 1; i < N; i++) {
		if (A[i-1] == A[i]) {
			ans = 1;
			break;
		}
	}

	if (ans == 0) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
    return 0;
}
