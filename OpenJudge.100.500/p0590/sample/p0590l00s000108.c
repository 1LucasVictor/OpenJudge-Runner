#include <stdio.h>

int main(void)
{
  int num[5];
  int i, j, k;
  int sub = 0;
  int check = 0;

  for(i=0; i<5; i++) scanf("%d", &num[i]);
  scanf("%d", &k);

  sub = num[4] - num[0];
  if(sub < k) check = 1;

  if(check == 1) printf("Yay!\n");
  else printf(":(\n");

  return 0;
}
