#include <stdio.h>
   
#define LOOPOUT (0)
#define CHECK_NUM (1)
#define INCLUDE3 (2)
#define END_CHECK_NUM (3)
   
void call(int n){
  int i = 1;
  int x = i;
  int f = CHECK_NUM;
while (f)
{
switch (f)
{
case CHECK_NUM:
  x = i;
  if ( x % 3 == 0 ){
    printf(" %d", i);
    f = END_CHECK_NUM;
    break;
  }
case INCLUDE3:
  if ( x % 10 == 3 ){
    printf(" %d", i);
    f = END_CHECK_NUM;
    break;
  }
  x /= 10;
  if ( x ) { f = INCLUDE3; break; }
case END_CHECK_NUM:
  if ( ++i <= n ) f = CHECK_NUM;
  else f = LOOPOUT;
  break;
default:
  break;
}
}
  putchar('\n');
}
   
int main(void)
{
int n;
scanf("%d", &n);
call(n);
return 0;
}