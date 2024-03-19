#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int main(void)
{
  String moneyStr;
  scanf("%s",moneyStr);
  int money = atoi(moneyStr);
  int fivehundredyens = money / 500;
  int fiveyens = ( money % 500 ) / 5;
  int Happiness = ( fivehundredyens * 1000 ) + ( fiveyens * 5 );
  printf("%d",Happiness);
  return 0;
}


