#include<stdio.h>

int main(){
  int a, b, x;
  scanf("%d%d%d", &x, &a, &b);
  
  if(b<=a){
    printf("delicious\n");
  }else if(a<b && (b-a)<=x){
    printf("safe\n");
  }else if(x<=(b-a)){
    printf("dangerous\n");
  }
  
  return 0;
}
