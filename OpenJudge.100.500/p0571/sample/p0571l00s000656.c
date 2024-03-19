#include <stdio.h>

int main (void)
{
  int people, train, taxi;

  scanf("%d %d", &people, &train, &taxi);

  if(people * train < taxi)
    printf("%d", people * train);
  else
    printf("%d", taxi);

  return 0;
}
