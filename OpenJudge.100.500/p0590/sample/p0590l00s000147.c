#include <stdio.h>

int main(void)
{
  int a[5],i = 0,k,j = 0;
  for(i = 0;i < 5;i++) {
    scanf("%d",&a[i]);
  }
  scanf("%d",&k);

  i = 0;
  for(i = 0;i < 5;i++) {
    j = 0;
    for(j = 0;j <5;j++) {
      if(i != j) {
        if(a[i] - a[j] > k) {
          printf(":(\n");
          return -1;
        }
      }
    }
  }
  printf("Yay!\n");
  return 0;
}
