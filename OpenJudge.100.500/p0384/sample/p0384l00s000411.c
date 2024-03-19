#include <stdio.h>
#include <ctype.h>  // moji shori no library
 
int main(void)
{
  char ch;
  while(1)
    {
      // input
      scanf("%c",&ch);
      //evaluate convert output
      if(isupper(ch)!=0)
        {
          ch = tolower(ch);
          printf("%c",ch);
        }
      else if(islower(ch)!=0)
        {
          ch = toupper(ch);
          printf("%c",ch);
        }
      else
        {
          printf("%c",ch);
        }
      if (ch == '\n')break;
    }
  return 0;
}