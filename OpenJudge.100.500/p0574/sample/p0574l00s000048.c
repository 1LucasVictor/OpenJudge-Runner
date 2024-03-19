#include <stdio.h>

int main()
{
  char chr[4] = {0};
  int success = 1;
  
  scanf("%s", chr);
  for (int i=0; i<3; i++) {
    if (chr[i] == chr[i+1]) {
      success = 0;
    }
  }
  if (success == 0) {
    printf("%s", "Bad");
  } else {
    printf("%s", "Good");
  }
  
  return 0;
}