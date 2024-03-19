#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
  int n, n3, n2, n1;
  scanf("%d", &n);
  n3 = n / 100;
  n2 = (n - n3*100) / 10;
  n1 = n - n3*100 - n2*10;

  if(n1 == 7 || n2 == 7 || n3 == 7){
    printf("Yes\n");
  }
  else{
    printf("No\n");
  }

  return 0;
  }
