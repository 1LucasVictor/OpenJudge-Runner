#include<stdio.h>
#include<string.h>
main(){
  char str;
  while(~scanf("%c",&str)){
    if(toupper(str)!=str)
      printf("%c",toupper(str));
    else if(tolower(str)!=str)
      printf("%c",tolower(str));
    else
      printf("%c",str);
  }
  return 0;
}