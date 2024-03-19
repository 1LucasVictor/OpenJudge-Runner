#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

//#define NDEBUG

#ifdef NDEBUG
#define DEBUG_PRINT(fmt, ...) ((void)0)
#else
#define DEBUG_PRINT(fmt, ...) fprintf(stderr, fmt, ##__VA_ARGS__)
#endif
#define ASSERT_RANGE(min,x,max) assert(((x)>=(min)) && ((x)<=(max)))


#define N_MIN 1
#define N_MAX 100

int sort_int(int *a, int N) {// {{{
	int i;
	for (i = 0; i < N-1; i++) {
		int j;
		for (j = i + 1; j < N; j++) {
			if (a[i] > a[j]) {
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	return 0;
}// }}}

int main(int argc, char **argv) {
	int N;
	fscanf(stdin,"%d",&N);
	ASSERT_RANGE(N_MIN,N,N_MAX);


	{
		int ret[N_MAX+1];
		int i;
		memset(ret,0,sizeof(int)*(N_MAX+1));
		for (i = 1; i < 10; i++) {
			int j;
			for (j = 1; j < 10; j++) {
				ret[i*j] = 1;
			}
		}
		if (ret[N] == 1) {
			fprintf(stdout,"Yes\n");
		} else {
			fprintf(stdout,"No\n");
		}
	}
	return 0;
}
