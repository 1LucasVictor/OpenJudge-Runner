#include <stdio.h>

int main(){
  int a, b, c, d, e, i, k, aa, bb;

  scanf("%d %d", &a, &b);

  if(a > b){
    c = a % b;
    d = b;
  } else {
    c = b % a;
    d = a;
  }

  e = 1;
  for(i=1; i <= d; i++){
  aa = c%i;
  bb = d%i;
    if( aa == 0){
      if( bb == 0){
         e = i;
      }
    }

  }

  printf("%d\n", e);
  return 0;
}