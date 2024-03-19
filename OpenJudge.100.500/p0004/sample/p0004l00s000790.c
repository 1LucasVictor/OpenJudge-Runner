#include <stdio.h>

int gcd(int x, int y){ /*x=<y*/
  if(x==0){
    return y;
  } else {
    return gcd(y%x, x);
  }
}

int main(){
  int a, b;
  int c, ans1, ans2;
  while(scanf("%d %d", &a, &b) != EOF){
    if(a>b){
      c = a;
      a = b;
      b = c;
    }
    ans1 = gcd(a, b);
    ans2 = b / ans1 * a;
    printf("%d %d\n", ans1, ans2);
  }
  return 0;
}