#include <stdio.h>

int main(void){
  int n, k, t;
  scanf("%d %d", &n, &k);

  t = n%k;

  if(t < k-t) printf("%d\n", t);
  else printf("%d\n", k-t);
  
  return 0;
}
