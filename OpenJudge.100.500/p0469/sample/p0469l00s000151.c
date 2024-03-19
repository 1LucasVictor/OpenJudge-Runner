#include <stdio.h>

int hikyori(int dist)
{
  int A,B;
  int i;
  int flg;
  scanf("%d %d",&A,&B);
  
  for(i = A; i<=B;i++)
  {
    if( i % dist == 0)
    {
      printf("OK");
      flg = 1;
      break;
    }
  }
  if(flg == 0)
  {
    printf("NG");
  }
  
  return 0;
}

int main(void)
{
  int K;
  
  scanf("%d",&K);
  hikyori(K);
  return 0;
}