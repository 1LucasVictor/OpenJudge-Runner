#include <stdio.h>


int main(void)
{
  int count;
  int num[100];
  int i;
  int n2 = 0;
  int n4 = 0;
  
  scanf("%d", &count);
  for (i=0; i<count; i++)
     scanf("%d", &num[i]);
  
  for (i=0; i<count; i++) {
    if (num[i]%2 == 0) {
      n2++;
      if(num[i]%3 == 0 || num[i]%5 == 0)
        n4++;
    }
  }
  
  if (n2 == n4)
    printf("APPROVED\n");
  else
    printf("DENIED\n");
  
  return 0;
}

