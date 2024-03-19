#include <stdio.h>

int main()
{
  int input;
  int five_h;
  int five;
  
  scanf("%d", &input);
  
  five_h = (input / 500);
  input = input% 500;
  five = input / 5;
  
  printf("%d\n", (five_h * 1000) + (five * 5));
  return 0;
}
