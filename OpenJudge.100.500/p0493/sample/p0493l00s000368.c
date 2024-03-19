#include<stdio.h>
int main(void){
  int i;
  int q = 0;
  int r = 0;
  int p = 0;
  int a = 0;

  scanf("%d",&i);

  if(i>499) {
    q = i/500 ;
  }
  a = i - 500*q;
  if(a>4){
    r = a/5;
  }
  p = q * 1000 + r * 5;

  printf("%d\n", p);
  return 0;
}
