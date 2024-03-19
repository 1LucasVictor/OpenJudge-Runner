#include<stdio.h>

int main (void){
  int N,num[1000],cnt=0;
  scanf("%d",&N);
  while(N>cnt){
      scanf("%d",&num[cnt]);
      if(num[cnt] % 2 == 0){
          if(num[cnt] % 3 != 0 && num[cnt] % 5 != 0)
          {
              printf("DENIED");
              return 0;
          }
      }
      cnt ++;
  }
  printf("APPROVED");
  return 0;

}
