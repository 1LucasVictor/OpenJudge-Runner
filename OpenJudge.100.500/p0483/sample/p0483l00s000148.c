#include <stdio.h>

int main(void)
{
  int n = 0;
  int ichi,ju,hyaku;
  scanf("%d",&n);
  ichi = n % 10;
  hyaku = n / 100;
  ju = (n - hyaku*100 - ichi) / 10;
  if(ichi==7||hyaku==7||ju==7)
    printf("Yes");
  else
    printf("No");
  return 0;
}
  