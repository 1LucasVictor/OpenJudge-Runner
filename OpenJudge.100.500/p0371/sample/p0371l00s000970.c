#include <stdio.h>

int main(void)
{
  int n = 0;
  int i = 0;
  int a[10000] = {0};
  int min = 1000001;
  int max = -1000001;
  int sum = 0;

  scanf("%d", &n);

  for(i = 0; i < n; i++)
    scanf("%d", &a[i]);

  for(i = 0; i < n; i++){
    if(a[i] > max)
      max = a[i];
    
    if(a[i] < min)
      min = a[i];

    sum += a[i];
  } 

  printf("%d %d %d\n", min, max, sum);
  
  return 0;
}