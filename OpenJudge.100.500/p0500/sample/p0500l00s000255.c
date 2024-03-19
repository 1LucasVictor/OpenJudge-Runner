/*
 * main.c
 *
 *  Created on: 2020/02/22
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
int sc[6][2] = {0};

int main()
{
	int N = 0, M = 0, i = 0;
	char ans[4] = {0};
	scanf("%d %d", &N, &M);
	for (i = 0; i < M; i++) {
		scanf("%d %d", &sc[i][0], &sc[i][1]);
	}
	for (i = 0; i < 4; i++) {
		ans[i] = -1;
	}
	for (i = 0; i < M; i++) {
		if (ans[sc[i][0]] == -1) {
			ans[sc[i][0]] = (char)sc[i][1];
		} else if (ans[sc[i][0]] != (char)sc[i][1]) {
			printf("-1\n");
			return 0;
		} else {
		}
	}

	if (N == 1) {
		printf("%1d\n", ans[1]);
		return 0;
	}
	if (N == 2) {
		if (ans[1] == 0) {
			printf("-1\n");
			return 0;
		} else {
			if (ans[2] == -1) {
				ans[2] = 0;
			}
			if (ans[1] == -1) {
				ans[1] = 1;
			}
			printf("%1d%1d\n", ans[1], ans[2]);
			return 0;
		}
	}

	// N == 3
	if (ans[1] == 0) {
		printf("-1\n");
		return 0;
	}
	if (ans[3] == -1) {
		ans[3] = 0;
	}
	if (ans[2] == -1) {
		ans[2] = 0;
	}
	if (ans[1] == -1) {
		ans[1] = 1;
	}
	printf("%1d%1d%1d\n", ans[1], ans[2], ans[3]);
    return 0;
}
