#include "stdio.h"

char s[100];

int main(void){
  scanf("%s", s);
  if(s[0] == s[1] || s[1] == s[2] || s[2] == s[3]){
    printf("Bad");
  }else{
    printf("Good");
  }
}