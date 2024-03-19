#include<stdio.h>

int main (){
  int a , b , t;
  int sum;

  scanf("%d %d %d",&a,&b,&t);

  sum = (t + 0.5) / a ;
  sum *= b;

  printf("%d\n",sum);

  return 0;
}
