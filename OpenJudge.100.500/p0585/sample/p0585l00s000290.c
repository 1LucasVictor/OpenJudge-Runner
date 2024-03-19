#include <stdio.h>

int main(void){
  int atime,bnum,time,times;
  scanf("%d %d %d",&atime,&bnum,&time);
  times = time/atime;
  printf("%d",times*bnum);
  return 0;
}