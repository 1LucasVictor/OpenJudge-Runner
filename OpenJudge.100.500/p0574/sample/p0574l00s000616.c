#include <stdio.h>

int main(int argc, char *argv[]){
  int i;
  char a,b,c,d;
  scanf("%c%c%c%c", &a,&b,&c,&d);
  if(a == b || b == c || a == c || b == d || c == d || a == d){
    printf("Bad");
  }else{
    printf("Good");
  }
  return 0;
}