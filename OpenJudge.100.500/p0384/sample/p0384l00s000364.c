#include <stdio.h>
#include <ctype.h>

int main()
{
 char str[1200];
 char c;
 int i=0;
 while(1)
 {
  scanf("%c",&c);
  if(c== '\n' )
   break;
  if(isupper(c))
    str[i]=tolower(c);
  else
  {
     str[i]=toupper(c);
  }
  i++;
 }
 str[i] = '\0';
 printf("%s\n", str);
 return 0;
}