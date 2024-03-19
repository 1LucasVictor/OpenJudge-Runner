#include<stdio.h>
int main()
{
  int d, n, i, m;
  scanf("%d %d", &d, &n);
  for(m = 1, i = 0; i < d; i++){
    m *= 100;
  }
  m *= (n<100 ? n : n+1);
  printf("%d\n", m);
  return 0;
}
