#include <stdio.h> 
 
int main() 
{ 
  int hp, at; 
  scanf("%d %d", &hp, &at); 
  
  if(hp%at == 0) 
  { 
    printf("%d\n", hp/at); 
  } 
  else 
  { 
    printf("%d\n", (hp/at)+1); 
  } 
  return 0; 
}