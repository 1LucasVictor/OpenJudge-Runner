#include<stdio.h>
int main(void){
  int n,d;
  scanf("%d %d",&n,&d);
  if(n==0){
    if(d!=100){
      printf("%d",d);
    }else{
        printf("101");
      }
    }else if(n==1){
      if(d!=100){
        printf("%d",d*100);
      }else{
          printf("10100");
    }
  }else{
      if(d!=100){
        printf("%d",d*10000);
      }else{
          printf("10000100");
    }
  }
  return 0;
}