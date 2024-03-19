#include <stdio.h>
#include <string.h>
int main(void)
{
  char a[100];
  char b[] = "ABC";
  char c[] = "ARC";
  scanf("%s",&a);
  if(strcmp(a,b)==0)
  {
    printf("ARC");
  }
  if(strcmp(a,c)==0)
  {
    printf("ABC");
  }
  return 0;
}