/*
 * main.c
 *
 *  Created on: 2020/03/28
 *      Author: family
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX(a,b) (a > b ? a : b)
#define MIN(a,b) (a > b ? b : a)
typedef long long int ll;
typedef unsigned long long int ull;

int sort_inc(const void *a, const void *b) { return (*(int*)a - *(int*)b);}
int sort_dec(const void* a, const void* b) { return (*(int*)b - *(int*)a);}
int sort_dec_ll(const void *a, const void *b) {
    ll da = *(ll*)a, db = *(ll*)b;    int val = 0;
    if(da > db) { val = -1; }
    else if (da == db) { val = 0; }
    else { val = 1; }
    return val;
}
int sort_inc_ll(const void *a, const void *b) {
    ll da = *(ll*)a, db = *(ll*)b;    int val = 0;
    if(da > db) { val = 1; }
    else if (da == db) { val = 0; }
    else { val = -1; }
    return val;
}
int sort_dic(const void *a, const void *b) {
    char *pa = (char *)a;    char *pb = (char *)b;    int i = 0, val = 0, N = 10;
    for (i = 0; i < N; i++) {
    	char da = pa[i], db = pb[i];
    	if (da == db) continue;
  		if (da > db) val = 1; else val = -1;
        break;
    }
    return val;
}


int main()
{
	ll N = 0, K = 0, ans = 0x1000000000000000 ;
	scanf("%lld %lld", &N, &K);
	if ((N%K) == 0) {
		ans = 0;
	} else {
		ll temp = 0, temp2 = 0;
		temp = N%K;
		temp2 = K - temp;
		ans = MIN(temp, temp2);
	}
	printf("%lld\n", ans);
    return 0;
}
