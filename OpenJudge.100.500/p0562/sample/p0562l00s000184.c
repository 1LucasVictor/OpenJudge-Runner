#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
 
  // 入力
  int a,b,cnt,kuti;
  scanf("%d %d",&a,&b);
  kuti = a;
  cnt = 1;

  while(kuti < b){
    kuti += (a-1);
    cnt  += 1;
  }

  printf("%d\n",cnt);
 
  return 0;
}