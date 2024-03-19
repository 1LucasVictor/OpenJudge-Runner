#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  int x, a, b;
  int A;

  scanf("%d", &x);
  scanf("%d", &a);
  scanf("%d", &b);

  if(a>=b){
    printf("delicious\n");
    return 0;
  }

  else{
    if(x>=b-a){
      printf("safe\n");
      return 0;
    }

    else{
      printf("dangerous\n");
      return 0;
    }
  }
    return 0;
}
   