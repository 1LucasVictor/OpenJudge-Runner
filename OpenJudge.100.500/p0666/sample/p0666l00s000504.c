#include <stdio.h>
  int main(void){
    int x,a,b;
    scanf("%d %d %d",&x,&a,&b);
    if(b-a <= x && a<b){
      printf("safe\n");
    }
    if(a >= b){
      printf("delisious\n");
    }
    if(b-a > x){
      printf("dangerous\n");
    }
  }