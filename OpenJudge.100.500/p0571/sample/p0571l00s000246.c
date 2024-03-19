#include<stdio.h>

int main(void){
  int n;
  int a;
  int b;
  scanf("%d", &n);
  scanf("%d", &a);
  scanf("%d", &b);
  if(n*a < b){
    printf("%d", n*a);
  }else{
    printf("%d", b);
  }
}