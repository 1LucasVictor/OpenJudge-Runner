#include<stdio.h>
#include<string.h>
int main()
{
  char a[5];
  scanf("%s", a);
  if(strcmp(a, "ABC"))
  {
    printf("ABC");
  }
  else
    printf("ARC");
  
  return 0;
}