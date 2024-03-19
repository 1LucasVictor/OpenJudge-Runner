#include<stdio.h>

int main()
{
  long int L;
  long int R;
  int min;
  
  scanf("%ld%ld", &L, &R);
  
  if (R - L >= 2018)
  {
    printf("0");
    return 0;
  }
  
  if (R / 2019 != L / 2019)
  {
    printf("0");
    return 0;
  }
  
  min = (L % 2019) * ((L + 1) % 2019) % 2019;
  for (int i = L; i < R; i++)
  {
    for (int j = i + 1; j <= R; j++)
    {
      if (min > (i % 2019) * (j % 2019) % 2019) min = (i % 2019) * (j % 2019) % 2019;
    }
  }
  
  printf("%d", min);
  return 0;
}