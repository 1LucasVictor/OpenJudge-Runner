#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned long long int uint64;
typedef long long int          int64;
 
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define ABS(a) ((a)>(0)?(a):-(a))

void get_N (int64 *n)
{
  int cnt;
  
  cnt = scanf("%lld", n);

  return;
}

void get_NK (int64 *n, int64 *k)
{
  int cnt;
  
  cnt = scanf("%lld %lld", n, k);

  return;
}

void omit_LF (void)
{
  char c;
  int  cnt;
  
  cnt = scanf("%c", &c);
  return;
}

char *get_S (int64 n)
{
  char *buf;
  int  i;
  int  cnt;

  buf = malloc((size_t)(n * sizeof(char)));
  if (buf == NULL) {
    return NULL;
  }

  cnt = scanf("%s", buf);

  return buf;
}

char *get_SN (int64 max, int64 *size)
{
  char *buf;
  int  i;
  int  n;

  buf = malloc((size_t)(max * sizeof(char)));
  if (buf == NULL) {
    return NULL;
  }

  scanf("%s", buf);

  n = strlen(buf);

  *size = n;
  
  return buf;
}

typedef struct _tmp_t {
  int64    a;
  int64    b;
} tmp_t;


tmp_t *get_NSeq (int64 n)
{
  tmp_t *buf;
  int64 i;

  buf = malloc((size_t)(n * sizeof(tmp_t)));
  for (i=0; i<n; i++) {
    get_N(&buf[i].a);
  }

  return buf;
}

int compare_a(const void *a, const void *b)
{
  tmp_t *x;
  tmp_t *y;

  x = (tmp_t *)a;
  y = (tmp_t *)b;

  if (x->a > y->a) return 1;
  if (x->a < y->a) return -1;

  return 0;
}

int compare_b(const void *a, const void *b)
{
  tmp_t *x;
  tmp_t *y;

  x = (tmp_t *)a;
  y = (tmp_t *)b;

  if (x->b > y->b) return 1;
  if (x->b < y->b) return -1;

  return 0;
}

void qsort_a (tmp_t *array, int size)
{
  qsort(array, size, sizeof(tmp_t), compare_a);
}

void qsort_b (tmp_t *array, int size)
{
  qsort(array, size, sizeof(tmp_t), compare_b);
}

int main()
{
  int64 N;
  tmp_t *A;
  int64 i;
  
  get_N(&N);

  A = get_NSeq(N);

  qsort_a (A, N);

  for (i=1; i<N; i++) {
    if (A[i-1].a == A[i].a) {
      printf ("NO");
      return 0;
    }
  }

  printf ("YES");
  return 0;
}

