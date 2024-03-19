#include <stdio.h>

int main(void){
  int a, b, c, n, yaku=0;
  scanf("%d %d %d",&a,&b,&c);
  for(n=a ; n<=b ; n++){
    if(c%n==0) yaku++;
  }
  printf("%d\n",yaku);

 return 0;
  }