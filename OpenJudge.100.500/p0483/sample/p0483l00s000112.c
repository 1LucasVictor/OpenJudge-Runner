#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
  int num,a,flag=0;
  (void)scanf("%d",&num);
  a=num;
  if(a/100==7){
    flag=1;
  }else{
    num=num-100*(a/100);
  }
  a=num;
  if(a/10==7){
    flag=1;
  }else{
    num=num-10*(a/10);
  }
  if(num==7){
    flag=1;
  }
  if(flag){
    printf("Yes\n");
  }else{
    printf("No\n");
  }
  return 0;
}