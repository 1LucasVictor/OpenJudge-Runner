#include <stdio.h>

int main() {
   char a,b,c;
   scanf("%c %c %c",&a,&b,&c);
    if(a=='A'&&b=='B'&&c=='C'){
    printf("ARC\n") ;
    }
    else if(a=='A'&&b=='R'&&c=='C')
    {
        printf("ABC\n") ;
    }
  return 0;
}