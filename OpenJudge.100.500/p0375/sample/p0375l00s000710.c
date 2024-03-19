#include<stdio.h>
int main(void)
{
  int n,i,k;
  k = 0;
  scanf("%d",&n);
  for(i = 3;i <= n;i ++){
    if(i % 100 == 0){
      k++;
    }
    if(i % 3 ==0){
      printf(" %d",i);
    }else if(i % 10 == 3){
      printf(" %d",i);
    }else if(i - k*100>= 30 && i - k*100<= 40){
      if(i - k*100 % 30 == 1||i - k*100 % 30 == 2||i - k*100 % 30 == 3||i - k*100 % 30 == 4||i - k*100 % 30 == 5||i - k*100 % 30 == 6||i - k*100 % 30 == 7||i - k*100 % 30 == 8||i - k*100 % 30 == 9){
        printf(" %d",i);
      }
    }
  }
  printf("\n");
  return 0;
}