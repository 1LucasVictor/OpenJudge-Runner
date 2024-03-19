#include <stdio.h>
 
int main()
{
  int i;
  char p[4];
  
  scanf("%s",&p);
 
  if(p[0]==p[1]||p[1]==p[2]||p[2]==p[3])
  {
    printf("Bad");
  }
  else
  {
    printf("Good");
  }
  
  return 0;
}