#include <stdio.h>

int main()
{
  int n;
  int debt = 100000;
  int i;

  scanf("%d", &n);
  for (i = 0; i < n; i++){
    debt = debt * 105 / 100;
    if (debt % 1000 != 0){
      debt = (debt / 1000 + 1) * 1000;
    }
  }
  printf("%d\n", debt);

  return (0);
}