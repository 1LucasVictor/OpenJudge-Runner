#include<stdio.h>

int main()
{
  long int L;
  long int R;
  int min;
  
  scanf("%ld%ld", &L, &R);
  
  if (R - L >= 2018 || L % 2019 != 1)
  {
    printf("%d", 0);
    return 0;
  }
  
  min = 2;
  for(int i = 1; i < R - L; i++)
  {
    if (min > i * (i + 1) % 2019) min = i * (i + 1) % 2019;
  }
  
  printf("%d", min);
  return 0;
}