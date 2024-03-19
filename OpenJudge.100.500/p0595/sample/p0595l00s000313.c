#include <stdio.h>
int main(){
  int a,b,k,ans = 0;
  int i = 100;
  scanf("%d %d %d", &a,&b,&k);
  while (k>0) {
    if (a % i == 0 && b % i == 0) {
      ans = i;
      k -= 1;
    }
    i -= 1;
  }
  printf("%d\n", ans);
}
