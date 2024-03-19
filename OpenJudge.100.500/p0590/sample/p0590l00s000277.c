#include<stdio.h>
#define max 5
int main(void)
{
  int a[max],  k, b = 0;
  int i, j;
  
  for(i = 0 ; i <= 4 ; i++)
    scanf("%d", &a[i]);
  scanf("%d", &k);
  
  for(i = 0 ; i <= 3 ; i++)
  {
    for(j = i+1 ; j <=4 ; j++)
    {
      if(a[j] - a[i] > k)
      {
        b = 1;
      }
    }
  }
  
  if(b == 0)
    printf("Yay!");
  else
    printf(":(");
  
  return 0;
}