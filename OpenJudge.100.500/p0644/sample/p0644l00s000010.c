#include <stdio.h>

int main(void)
{
  char Get[4];
  int Count = 0;
  int loop;
 
  scanf("%s", Get);
 
  for(loop=0; loop<3; loop++) {
    if('1' == Get[loop]) {
      Count++;
    }
  }
  
  printf("%d", Count);
  
  return 0;
}