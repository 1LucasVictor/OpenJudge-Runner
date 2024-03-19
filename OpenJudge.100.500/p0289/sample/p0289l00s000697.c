#include <stdio.h>
main(){
  int i, a, b;

  scanf("%d %d", &a, &b);
  if(a > b)
    for(i = a % b;i > 1;i--){
      if( (a % i) == 0 && (b % i) == 0) break;
    }
  else if(b > a)
    for(i = b % a;i > 1;i--){
      if( (a % i) == 0 && (b % i) == 0) break;
    }
  else
    i = a;
  printf("%d\n", i);
  return 0;
}