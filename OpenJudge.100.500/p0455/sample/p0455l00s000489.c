#include <stdio.h>
#include <stdlib.h>
int main(){
  int a;
  scanf("%d", &a);
  printf("%d",(int) (a + pow((double)a,2) + pow((double)a,3)));
    
  return 0;
}