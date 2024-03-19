#include <stdio.h>

int main(){
  int d, k;  scanf("%d %d", &d, &k);
  int ans = 1;
  for(int i=0; i<d; i++)
    ans *= 100;
  ans *= k;
  if(k == 100)  ans *= 1.01;
  printf("%d\n", ans);
  return 0;
}
