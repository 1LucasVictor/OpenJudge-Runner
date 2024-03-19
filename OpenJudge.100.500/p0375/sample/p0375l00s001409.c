#include <stdlib.h>
#include <stdio.h>

void Constraints(int n)
{
  if(!(3<=n&&n<=10000))
  {
    printf("条件を満たす入力をしてください。\n");
    exit(0);
  }
}
void CheckNum(int n)
{
  int i=1;
  while(i!=n+1)
  {
    int x=i;
    if(x%3==0)
    {
      printf(" %d",i);
    }
    else if(x%10==3)
    {
      printf(" %d",i);
    }else
    {
      while(x/10!=0)
      {
        x=x/10;
        if(x%10==3){printf(" %d",i); break;}
      }
    }
  i++;
  }
  printf("\n");
}
int main(void)
{
  int n;
  scanf("%d",&n);
  Constraints(n);
  CheckNum(n);
}

