#include <stdio.h>
  int main(void){
    int x,a,b;
    scanf("%d",&x);
    scanf("%d",&a);
    scanf("%d",&b);
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