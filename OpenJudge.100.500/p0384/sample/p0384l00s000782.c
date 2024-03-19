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
  if(c== '\n' || c =='\0')
   break;
  if(isupper(c))
    str[i]=tolower(c);
  else
  {
   if(islower)
     str[i]=toupper(c);
   else
     str[i]=c;
  }
  i++;
 }
 str[i] = '\0';
 printf("%s\n", str);
 return 0;
}