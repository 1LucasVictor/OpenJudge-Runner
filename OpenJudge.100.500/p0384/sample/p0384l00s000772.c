#include<stdio.h>
#include<ctype.h>
int main(void)
{
  char ch;
  while((ch=getchar())!=EOF){
    if(isalpha(ch)){
      if(isupper(ch))
	putchar(tolower(ch));
      else
	putchar(toupper(ch));
    }
    else
      putchar(ch);
  }
  return 0;
}