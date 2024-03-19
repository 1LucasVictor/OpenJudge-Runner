#include <stdio.h>

int main(void){
  int a,b;
  int num=1;//現在の口の個数
  int count=0;

  scanf("%d %d", &a, &b);

  while(num<b){
    num+=a-1;
    count++;
  }

  printf("%d\n", count);

  return 0;
}
