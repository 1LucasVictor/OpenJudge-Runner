#include <stdio.h>
#include <ctype.h>

int main()
{
  int r,c,x,sum,i,j;
  char ch;
  while (scanf("%c",&ch)!=EOF){
    if (ch=='.'){
      break;
    }else if islower(ch){
        printf("%c",toupper(ch));
      }else if isupper(ch){
        printf("%c",tolower(ch));
      }else{
      printf("%c",ch);
    }

  }
  puts(".");

  return 0;
}