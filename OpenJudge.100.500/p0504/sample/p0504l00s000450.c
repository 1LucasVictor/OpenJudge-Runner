#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  int h,a;
  int i;
  scanf("%d %d",&h,&a);
  int sum=0;
  for(i=0;sum<h;i++){
    sum+=a;
  }
  printf("%d",i);
  return 0;
}
