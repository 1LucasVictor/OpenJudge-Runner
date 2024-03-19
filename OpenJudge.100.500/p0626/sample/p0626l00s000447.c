#include <stdio.h>

int main(){
  int d, k;  scanf("%d %d", &d, &k);
  int ans = 1;
  for(int i=0; i<d; i++)
    ans *= 100;
  ans *= k;
  printf("%d\n", ans);
  return 0;
}
