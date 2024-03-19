#include <unistd.h>
#include <stdio.h>

int main(void)
{
  char s[4];
  scanf("%s", s);
  if ((s[0] == 'A' && s[1] == 'A' && s[2] == 'A') || (s[0] == 'B' && s[1] == 'B' && s[2] == 'B'))
  {
    write(1, "No", 2);
    return 0;
  }
  write(1, "Yes", 3);
  return 0;
}