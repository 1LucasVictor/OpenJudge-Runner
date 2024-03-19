#include<stdio.h>

int main(){
  int a,b,c;
  scanf("%d %d %d", &a, &b, &c);
  if(b+c >=a){
    printf("%d", b+c-a);
  }else{
    printf("0");
  }
}