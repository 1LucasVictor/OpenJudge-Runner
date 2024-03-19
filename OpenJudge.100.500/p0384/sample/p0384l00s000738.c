#include<stdio.h>
#include<ctype.h>
main(){
  char string;

//  scanf("%s",string);
  scanf("%c",&string);
  while(string!='\n'){
    if(isupper(string)!=0) printf("%c",tolower(string));
    else printf("%c",toupper(string));
    scanf("%c",&string);
  }
  printf("\n");

  return 0;
}