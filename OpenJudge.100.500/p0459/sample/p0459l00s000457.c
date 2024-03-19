#include <stdio.h>

int main (){
  int n,m;
  scanf("%d%d", &n, &m);

  if((4*n>=m) && (m >= 2*n) && (m%2==0))
    printf("Yes\n");
  else
    printf("No\n");

  return 0;
}
