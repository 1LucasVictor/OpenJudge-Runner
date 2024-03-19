#include<stdio.h>

int main(void){
  int a, b, c, k, i, result = 0;

  scanf("%d%d%d%d", &a, &b, &c, &k);

  if(a < k){
    result += a;
    k -= a;
    if(b < k){
      k -= b;
      if(c = k){
        result -= c;
      }else{
        result -= k;
      }
    }
  }else{
    result += k;
  }

  printf("%d", result);

  return 0;
}
