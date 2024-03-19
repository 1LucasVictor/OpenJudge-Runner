#include <stdio.h>

int main(void){
  int a, b;
  scanf("%d %d", &a, &b);
  
  if(b%a){
    printf("%d", b-a);
  }
  else{
    printf("%d", a+b); 
  }

}