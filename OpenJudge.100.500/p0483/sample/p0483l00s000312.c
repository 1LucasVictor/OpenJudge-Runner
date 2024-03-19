#include<stdio.h>
#include<string.h>

int main () 
{
  int i;
  char n[4];
  
  scanf("%s",n);

  if ( n[0] == '7' || n[1]=='7' || n[2]=='7' )
  {
  printf("Yes");
    return 0;
  }
 
  printf("No");
  return 0;
}