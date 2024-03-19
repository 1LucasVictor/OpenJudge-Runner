/* 1 6 0 8 10 0 0 0 */
/* 6 10 8 1 */

#include <stdio.h>
int main(void){
  int input;
  int cars[11] = {0};
  int stack = 0;
  while(scanf("%d",&input) != EOF)
    {
      if ( input == 0)
        {
          printf("%d\n",cars[stack-1]);
          stack--;
        }
      else
        {
          cars[stack] = input;
          stack++;
        }
    }
return 0;
}