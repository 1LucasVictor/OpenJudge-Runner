#include <stdio.h>

int
main(int argc, char *argv[])
{
  char s[5]; int flag = 0;
  scanf("%s", s);

  for(int i = 0; i < 3; i++){
    if(s[i] == s[i + 1]) flag++;
  }

  if(flag > 0) printf("Bad\n");
  else printf("Good\n");

  return 0;
}
