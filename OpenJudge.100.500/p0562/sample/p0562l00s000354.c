#include <stdio.h>
#include <string.h>

#define MIN(A,B) (A)<(B)?(A):(B)
#define MAX(A,B) (A)>(B)?(A):(B)

#define N 5

int main(){
  int n, a, b, c=0, i;
  char S[N], T[N];
  scanf("%d %d", &a, &b);
  c=(b-1)/(a-1);
  if ((b-1)%(a-1)) c++;
  printf("%d\n", c);
  return 0;
}
