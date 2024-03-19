#include <stdio.h>
#include <math.h>

int main(void)
{
  int i, result = 0;
  char s[200000], t[200000];
  
  scanf("%s", s);
  scanf("%s", t);

  for( i = 0; s[i] != '\0'; i++ ){
      if( s[i] != t[i] ){
        result++;
      }
  }
  
  printf("%d\n", result);
  return 0;
}