#include "stdio.h"
#include <stdlib.h>

int main (){
  //  const int size=200000;                                                                                  
  int a, b, c;
  scanf("%d %d",&a, &b);
  if ((a+b)%2==0){
    c = (a+b)/2;
    printf("%d\n",c);
  } else{
    printf("IMPOSSIBLE\n");
  }

  return 0;
}