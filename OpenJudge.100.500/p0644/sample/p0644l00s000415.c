#include <stdio.h>

int main() {
  char s[10];
  
  scanf("%s", s);
  if(s[0] == '1' && s[1] == '1' && s[2] == '1')
    printf("3\n");
  else if(s[0] == '0' && s[1] == '0' && s[2] == '0')
    printf("0\n");
  else if((s[0] == '1' && s[1] == '0' && s[2] == '0')
          ||(s[0] == '0' && s[1] == '1' && s[2] == '0')
          ||(s[0] == '0' && s[1] == '0' && s[2] == '1'))
    printf("1\n");
  else
    printf("2\n");
  
  return 0;
}
   