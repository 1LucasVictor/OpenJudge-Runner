#include <stdio.h>
#include <string.h>

int main()
{
  char s[4];

  scanf("%s", s);
  if(strcmp(s,"AAA") == 0 || strcmp(s,"BBB") == 0){
    printf("No");
    return 0;}

  printf("Yes");
  return 0;
}
