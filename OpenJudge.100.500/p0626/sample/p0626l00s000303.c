#include<stdio.h>
int main(void){
  int d,n,i;
  int num = 1;
  
  if(scanf("%d %d",&d,&n)){
  
      if(d == 1 && n != 100){
        num = 100 * n;
      }
     else if(d == 1 && n == 100){
        num = 10100;
      }
      else if(d == 2 && n != 100){
        num = 10000 * n;
      }
     else if(d == 2 && n == 100){
        num = 1010000;
      }
      else if(d == 0 && n != 100){
        num = n;
      }
       else if(d == 0 && n == 100){
        num = 101;
      }
      printf("%d",num);
  }
  return 0;
}