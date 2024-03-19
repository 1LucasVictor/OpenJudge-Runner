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

void get_N1234 (int64 *n1, int64 *n2, int64 *n3, int64 *n4)
{
  int cnt;

  if (n2 == NULL) {
    cnt = scanf("%lld", n1);
    return;
  }
  if (n3 == NULL) {
    cnt = scanf("%lld %lld", n1, n2);
    return;
  }
  if (n4 == NULL) {
    cnt = scanf("%lld %lld %lld", n1, n2, n3);
    return;
  }
  cnt = scanf("%lld %lld %lld %lld", n1, n2, n3, n4);
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
  int  cnt;

  buf = malloc((size_t)(max * sizeof(char)));
  if (buf == NULL) {
    return NULL;
  }

  cnt = scanf("%s", buf);

  n = strlen(buf);

  *size = n;
  
  return buf;
}

int64 *get_NSeq (int64 n)
{
  int64 *buf;
  int64 i;

  buf = malloc((size_t)(n * sizeof(int64)));
  for (i=0; i<n; i++) {
    get_N(&buf[i]);
  }

  return buf;
}

typedef struct _tmp_t {
  int64    a;
  int64    b;
} tmp_t;

typedef int64 simple_t;

int compare_simple(const void *a, const void *b)
{
  simple_t *x;
  simple_t *y;

  x = (simple_t *)a;
  y = (simple_t *)b;

  if (x > y) return 1;
  if (y < x) return -1;

  return 0;
}
void qsort_simple (simple_t *array, int size)
{
  qsort(array, size, sizeof(simple_t), compare_simple);
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

int64 wk[(2*(10*10*10*10*10))];

int main()
{
  int64 N;
  int64 *A;
  int64 i;
  int64 total = 0;
  int64 play=0;
  
  get_N(&N);
  A = get_NSeq((N-1));

  for (i=0; i < (N-1); i++) {
    wk[A[i] - 1]++;
  }

  for (i=0; i<N; i++) {
    printf("%lld\n",wk[i]);
  }
  return 0;
}

