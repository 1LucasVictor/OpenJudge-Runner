#include <stdio.h>
#include <string.h>
int main()
{
      char s[3];
      scanf("%s",s);
      if(strcmp(s,"ABC")==0) printf("ARC\n");
      if(strcmp(s,"ARC")==0) printf("ABC\n");
      return 0;
}