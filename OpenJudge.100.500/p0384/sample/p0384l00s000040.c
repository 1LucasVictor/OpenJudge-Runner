#include <stdio.h>

int main(void){
  int i;
  char st,al[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
  
  do{
    scanf("%c", &st);

    for(i=0;i<52;i++)
      if(al[i] == st){
        st = al[ (i+26)%52 ];
        break;
      }

    printf("%c", st);

  }while(st != '\n');

  return 0;
}

