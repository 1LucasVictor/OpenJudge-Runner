#include <stdio.h>

int main(void){
  int s;
  int h,m,sec;

  scanf("%d",&s);
  sec=s%60;  s=s/60;
  m=s%60;  s=s/60;
  h=s%60;
  printf("%d:%d:%d\n",h,m,sec);

  return 0;
}