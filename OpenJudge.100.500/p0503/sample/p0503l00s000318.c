#include <stdio.h>
#include <stdlib.h>

int main (void)
{
  int N, i;
  unsigned long A;
  char *IND;
    
  scanf("%d", &N);
  
  IND = (char *)calloc(1000000000, sizeof(char));
  
  for (i = 0; i < N; i++) {
    scanf("%lu", &A);
    
    IND[A]++;
    
    if (IND[A] > 1) {
      puts("NO");
      return 0;
    }
  }
  puts("YES");
  
  return 0;
  
}