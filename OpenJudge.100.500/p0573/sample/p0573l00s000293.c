// Ver19.03
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define INF (1 << 29) * 2
#define LLINF 4545454545454545454
#define MOD 1000000007
#define ll long long
#define ull unsigned long long
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
int upll(const void *a, const void *b) { return *(ll *)a < *(ll *)b ? -1 : *(ll *)a > *(ll *)b ? 1 : 0; }
int downll(const void *a, const void *b) { return *(ll *)a < *(ll *)b ? 1 : *(ll *)a > *(ll *)b ? -1 : 0; }
void sortup(ll *a, int n) { qsort(a, n, sizeof(ll), upll); }
void sortdown(ll *a, int n) { qsort(a, n, sizeof(ll), downll); }

int main()
{
  int i, j, cnt = 0;
  char hoge[5];
  scanf("%s", hoge);
  for (i = 0; i < 4; i++)
  {
    cnt = 0;
    for (j = 0; j < 4; j++)
    {
      if (hoge[i] == hoge[j])
        cnt++;
    }
    if (!(cnt == 2))
    {
      puts("No");
      return 0;
    }
  }
  puts("Yes");
  return 0;
}
