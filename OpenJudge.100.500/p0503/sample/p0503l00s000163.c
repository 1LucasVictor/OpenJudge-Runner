#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define s_pri(str) printf("%s\n",str);
#define PRINT(str) printf(#str "\n")
#define v_pri(val) printf("%d\n",val);
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define pi acos(-1.0)
#define sca(x) scanf("%d",&x);

typedef long long int ll;

/*
puts("aa");
//*/
int cmp(const void* a, const void* b) {
	return *(int*)a - *(int*)b;
}


int main(void) {
	int N;
	scanf("%d", &N);
	int A[200000];
	rep(i, N) {
		scanf("%d", &A[i]);
	}
	int count = 0;
	qsort(A, N, sizeof(int), cmp);
	rep(i, N - 1) {
		if (A[i] == A[i + 1]) {
			count++;
		}
	}
	if (count == 0) {
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}

	return 0;
}