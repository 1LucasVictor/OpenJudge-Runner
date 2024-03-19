#include<stdio.h>
int main()
{
   char s[5];
   scanf("%s",&s);
   char a[]="ABC";

   int d = strcmp(s,a);

   if(d==0)
    printf("ARC");
  else
    printf("ABC");
    return 0;
}
