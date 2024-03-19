#include <stdio.h>
#include <stdlib.h>
int min(int a, int b)
{
  if(a <= b)
  return a;
  else
  return b;
}

void swap(int *p_from, int *p_to) {
    int tmp;
    tmp = *p_from;
    *p_from = *p_to;
    *p_to = tmp;
}

int main(void)
{
  int a[5], k;
  int i, min, max;
  for(i = 0; i < 5; i++)
  scanf("%d", &a[i]);
  scanf("%d", &k);
  min = a[0];
  max = a[4];
  for(i = 0; i < 5; i++){
    if(min > a[i])
    min = a[i];
    if(a[i] > max)
    max = a[i];
  }
  if(max - min <= k)
  printf("Yay!\n");
  else
  printf(":(\n");
  return 0;
}
