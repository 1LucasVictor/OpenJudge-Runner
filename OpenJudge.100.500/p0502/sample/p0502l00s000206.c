#include <stdio.h>

int main()
{
  int num;
  int tmp;
  int i;
  
  scanf("%d", &num);
  
  for (i = 0; i < num; i++) {
    scanf("%d", &tmp);
    if (tmp % 2 == 0) {
      if (!(tmp % 3 == 0 || tmp % 5 == 0)) {
        printf("DENIED");
        return -1;
      }
    }
  }
  
  printf("APPROVED");
  
  return 0;
}
  
