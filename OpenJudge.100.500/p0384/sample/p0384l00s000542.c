#include<stdio.h>
int main(){
  char c;

  while(1){
    scanf("%c",&c);
    if(c == '\n'){
        printf("\n");
    break;
    }
    if('A' <= c && c <= 'Z') c += 32;
    else if('a' <= c && c <= 'z') c -= 32;
    printf("%c",c);
  }
  return 0;
}

