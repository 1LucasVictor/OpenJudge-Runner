#include<stdio.h>
#include<ctype.h>
int main(){

  int i;
  char ch;

  while(1){

  scanf("%c", &ch);

  if ( ch == '\n' ) {
    printf("\n");
    break;
  }

  if ( isupper ( ch ) ){
    i = tolower( ch );
    printf("%c", i );
  } else {
    i = toupper ( ch );
    printf("%c", i );
  }

  }
  
  return 0;

}