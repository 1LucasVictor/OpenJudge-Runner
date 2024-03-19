#include <stdio.h>

int main(void){
  int a,b,c,k,sum=0;

  scanf("%d %d %d %d\n",&a,&b,&c,&k);

  while(k != 0){
    sum++;
    k--;
    a--;
    if(k == 0 || a == 0) break;
  }

  while(k != 0){
    k--;
    b--;
    if(k == 0 || b == 0) break;
  }

  while(k != 0){
    sum--;
    k--;
    c--;
    if(k == 0 || a == 0) break;
  }

  printf("%d\n",sum);

  return 0;
}