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
#define N_MAX 20

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
	int A,B;
	fscanf(stdin,"%d%d",&A,&B);
	ASSERT_RANGE(N_MIN,A,N_MAX);
	ASSERT_RANGE(N_MIN,B,N_MAX);

	if ((A<10)&&(B<10)) {
		fprintf(stdout,"%d\n",A*B);
	} else {
		fprintf(stdout,"-1\n");
	}
	return 0;
}

