#include <stdio.h>

int main(void)
{
  int num[4];
  int i,k;
  int check = 0, sub = 0;

  for(i=0; i<5; i++) scanf("%d", &num[i]);
  scanf("%d", &k);

  for(i=0; i<5; i++){
    sub = num[i+1]-num[i];
    if(sub > k) check = 1;
  }

  if(check == 1) printf("Yay!\n");
  else printf(":(\n");

  return 0;
}