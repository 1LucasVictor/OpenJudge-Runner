#include <stdio.h>

int main(){
  char a, b, c, d;
  scanf(" %c %c %c %c", &a, &b, &c, &d);
  int f = 0;
  if(a == b){
    if(a != c && c == d){
      f = 1;
    }
  }else if(a == c){
    if(a != b && b == d){
      f = 1;
    }
  }else if(a == d){
    if(a != b && b == c){
      f = 1;
    }
  }
  if(f){
    printf("Yes\n");
  }else{
    printf("No\n");
  }
  return 0;
}
