#include<stdio.h>

int main(){
  char ch,ch_small,ch_large;

  while(1){
    scanf("%c", &ch);

    if(ch == '\n'){
      break;
    }else if (ch > 64 && ch < 91){
      ch_small = ch + 32;
      printf("%c",ch_small);
    }else if (ch > 96 && ch < 123){
      ch_large = ch - 32;
      printf("%c",ch_large);
    }else{
      printf("%c",ch);
    }
  }

  printf("\n");

  return 0;
}