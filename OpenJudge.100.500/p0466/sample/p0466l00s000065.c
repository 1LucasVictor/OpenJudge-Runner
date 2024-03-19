#include <stdio.h>
#include <math.h>

int main(void)
{
  int i;
  char s[11], t[11];
  
  scanf("%s", s);
   scanf("%s", t);
  
  for( i = 0; i < 12; i++ ){
      if( s[i] == '\0'){
          printf("Yes\n");
          return 0;
      }
      
      if( s[i] != t[i] ){
          printf("No\n");
          return 0;
      }
      
  }
  

}