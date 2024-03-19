#include <stdio.h>

int main(){
  char a, b, c, d;
  scanf(" %c %c %c %c", &a, &b, &c, &d);
  if(a == b){
    if(a != c && c == d){
      printf("Yes\n");
    }
  }else if(a == c){
    if(a != b && b == d){
      printf("Yes\n");
    }
  }else if(a == d){
    if(a != b && b == c){
      printf("Yes\n");
    }
  }else{
    printf("No\n");
  }
  return 0;
}
