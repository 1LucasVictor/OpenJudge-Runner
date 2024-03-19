#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

//#define MOD (int)(1e5 + 7)
#define MOD (100007)

static inline void done(const char *s)
{
	puts(s);
	exit(0);
}

#define yes() done("Yes");
#define no() done("No");
#define invalid() done("-1");

static int comp(const void *a, const void *b)
{
	int *pa = (int *)a;
	int *pb = (int *)b;
	return *pa < *pb;
}

static inline int *readNint(int n)
{
	int *a = calloc(sizeof(int), n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	return a;
}

static inline long *readNlong(int n)
{
	long *a = calloc(sizeof(long), n);
	for (int i = 0; i < n; i++)
		scanf("%ld", &a[i]);
	return a;
}

int main(int argc, char **argv)
{
	int N;
	char S[3];
	scanf("%s", S);
	char f = S[0];
	for (int i = 1; i < 3; i++) {
		if (S[i] != f) {
			yes();
		}
	}
	no();
	return 0;
}
