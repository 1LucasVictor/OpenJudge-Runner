#include <stdio.h>

int main(){
  char s;
  int a = 0 ,b = 0;
  while(scanf("%c",&s) == 1){
    if(s == '0'){
      a += 1;
    }else if(s == '1'){
      b += 1;
    }
  }
  if(a >= b){
    printf("%d",2*b);
  }else if (a < b){
    printf("%d",2*a);
  }
  return 0;
}