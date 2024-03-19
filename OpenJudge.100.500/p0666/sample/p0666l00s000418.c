#include<stdio.h>
int main(){
  int a,b,c;
  scanf("%d %d %d",&c,&a,&b);
  if(a >= b){
    printf("delicious\n");
  }else if(b - a <= c){
    printf("safe\n");
  }else{
    printf("dangerous\n");
  }
  return 0;
}