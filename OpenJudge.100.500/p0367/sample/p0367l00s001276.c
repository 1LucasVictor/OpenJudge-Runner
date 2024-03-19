#include<stdio.h>
int main()
{
  int a, b, c, n=0, m=1;
  scanf("%d %d %d", &a, &b, &c);
  if(1 <= a && a <= 10000 && 1 <= b && b <= 10000 && 1 <= c && c  <= 10000 && a<=b){
    for(n = a;n < b ;n++){
      if(c%n == 0){
        m++;
      }
    }
  }
  m--;
  printf("%d\n",m);
  return 0;
}    