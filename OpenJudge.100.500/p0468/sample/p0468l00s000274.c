#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  char a[10] ;
  scanf("%s",&a);

  if(strcmp(a,"ABC") == 0 ){
    puts("ARC");
  }

  if(strcmp(a,"ARC") == 0 ){
    puts("ABC");
  }


    return 0;

}

