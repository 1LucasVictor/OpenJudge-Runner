#include <stdio.h>

int main(void)
{
  int time, hour, minute, second;
  
  scanf("%d", &time);
  
  hour = time / 3600;
  minute = (time % 3600) / 60;
  second = time % 60;
  
  printf("%d:%d:%d\n", hour, minute, second);
  
  return 0;
}