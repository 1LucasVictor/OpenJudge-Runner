#include <stdio.h>

int main()
{
  int num;
  int tmp;
  int flag = 0;
  int i;
  
  scanf("%d", &num);
  
  for (i = 0; i < num; i++) {
    scanf("%d", &tmp);
    if (tmp % 2 == 0) {
      if (!(tmp % 3 == 0 || tmp % 5 == 0)) {
        flag = 1;
      }
    }
  }
  
  if (flag) {
    printf("DENIED");
  } else {
  	printf("APPROVED");
  }
  
  return 1;
}
  
