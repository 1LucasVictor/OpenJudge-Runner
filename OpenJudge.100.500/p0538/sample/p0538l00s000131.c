#include <stdio.h>
//#include <string.h>

int main(void){
  int a,b,sum;
  scanf("%d %d", &a, &b);
  //sum = a*b;
  if(a<10 && b<10){
      printf("%d", a*b);
  }
  else
    printf("-1");

  return 0;
}
