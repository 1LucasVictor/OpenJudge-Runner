#include <stdio.h>
 
int f[100];
 
int main(){
  int n, i;
  f[0] = f[1] = 1;
  scanf("%d", &n);
  for(i = 2; i <= n; ++i) f[i] = f[i - 1] + f[i - 2];
  printf("%d\n", f[n]);
  return 0;
}
