#include <stdio.h>


int main (void)
{
  int n, a, b, i;
  scanf("%d", &n);
  for(i =1; i<= n; i++){
    a = i;
    if(a %3 ==0){
      printf(" %d", i);
    } else{
      for(;;){
        b = a % 10;
        if(b == 3){
          printf(" %d", i);
          break;
        } else if(a < 10)
        {
          break;
        }

        a = a/10;
      }
    }

  }
  printf("\n");
  return 0;
}