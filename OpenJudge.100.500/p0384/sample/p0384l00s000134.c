#include<stdio.h>
int main(void)
{
  char ch;
  while(1){
    scanf("%c",&ch);
    if(ch=='\n'){
      break;
    }
    if('a'<=ch&&ch<='z'){
      ch=ch-32;
      printf("%c",ch);
    }else if('A'<=ch&&ch<='Z'){
      ch=ch+32;
      printf("%c",ch);
    }else{
      printf("%c",ch);
    }
  }
  printf("\n");
  return 0;
}
