#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

//#define MOD (int)(1e5 + 7)
#define MOD (100007)

void invalid(void)
{
	printf("-1\n");
	exit(0);
}

static inline int *readNint(int n)
{
	int *a = calloc(sizeof(int), n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	return a;
}

int main(int argc, char **argv)
{
	int H, A;
	scanf("%d%d", &H, &A);
	int t = H / A;
	if (H > (t * A))
		++t;
	printf("%d\n", t);
	return 0;
}
