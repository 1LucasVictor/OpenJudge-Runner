#include<stdio.h>
int main(void){

  char ch;

  while(1)
    {
    scanf("%c",&ch);

    if(ch=='\n')break;

    if('a'<=ch&&ch<='z'){
      ch=ch-32;
    }else if(ch>='A'&&ch<='Z'){
      ch=ch+32;
    }
    
    printf("%c",ch);
  }
puts("");
  return 0;
}

