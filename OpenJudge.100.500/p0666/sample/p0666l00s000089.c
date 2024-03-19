#include <stdio.h>
  int main(void){
    int x,a,b;
    scanf("%d %d %d",&x,&a,&b);
    if(b-a < x+1 && a<b){
      printf("safe\n");
    }else if(a >= b){
      printf("delisious\n");
    }else{
      printf("dangerous\n");
    }
  }