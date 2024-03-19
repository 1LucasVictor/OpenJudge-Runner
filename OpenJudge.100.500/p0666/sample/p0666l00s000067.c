#include <stdio.h>

int ab_val(int, int);

int main(){
  int x, a, b, i;
  scanf("%d%d%d", &x, &a, &b);
  int judge=ab_val(a, b);
  if(judge>x)
    printf("dangerous\n");
  else if(judge<x && a>b)
    printf("delicios\n");
  else
    printf("safe\n");

  return 0;
}

int ab_val(int x, int y){
  int z=x-y;
  if(z<0)
    return -z;
  else
    return z;
}