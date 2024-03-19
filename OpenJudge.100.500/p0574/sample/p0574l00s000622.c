#include <stdio.h>
int main()
{
  char S[5];
   scanf("%s", S);
  if(S[0]==S[1])
    puts("Bad");
  else if(S[1]==S[2])
    puts("Bad");
  else if(S[2]==S[3])
    puts("Bad");
  else if(S[3]==S[4])
    puts("Bad");
  else
    puts("Good");
  return 0;
}