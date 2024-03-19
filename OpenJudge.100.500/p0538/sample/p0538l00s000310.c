#include<stdio.h>
int main(void){
  int a,b,sum;
  scanf("%d %d", &a,&b);
  if(a>9 || b>9){
    printf("-1\n");
  }
  else{
    sum =a*b;
    printf("%d\n",sum);
  }
  return 0;
}