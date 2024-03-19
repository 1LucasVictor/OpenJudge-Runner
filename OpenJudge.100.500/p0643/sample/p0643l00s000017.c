#include<stdio.h>

int main(){
  int a,b,c;

  scanf("%d", &a);
  scanf("%d", &b);

  c=(a*b)%2;

  if(c==0){
    puts("Even");
  }
  else{
    puts("Odd");
  }

  return 0;
}
