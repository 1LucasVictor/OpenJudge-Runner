#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#define Max(a, b) ((a) > (b) ? (a) : (b))
#define Min(a, b) ((a) > (b) ? (b) : (a))
#define abs(x) ((x) > 0 ? (x) : -(x))
#define rep(i, n) for(int i = 0; i < (n); i++)
#define INF 1000000000000 //10^12
#define MOD 1000000007 //10^9 + 7
#define endl printf("\n")
typedef long long ll;

int sort(const void *a, const void *b){
  int A = *(int *)a, B = *(int *)b;
  if(A > B) return  1;
  if(A < B) return -1;
  return 0;
}

int
main(int argc, char *argv[])
{
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  printf("%d\n", Max(c - (a - b), 0));
  return 0;
}
