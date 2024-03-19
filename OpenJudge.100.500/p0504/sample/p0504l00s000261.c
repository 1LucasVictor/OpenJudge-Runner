#include <stdio.h>

int main (void){
  int h,a;
  scanf("%d%d",&h,&a);
  int i=0;
  while(h>0){
    h-=a;
    i++;
  }
  printf("%d",i);
  return 0;
}
