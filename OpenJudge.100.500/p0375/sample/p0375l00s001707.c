#include<stdio.h>
void call(int);
int main(void)
{
  int n;
  scanf("%d",&n);
  call(n);
  printf("\n");
  return 0;
}
void call(int n)
{
  int i=1;
  int x;
  for(;;)
    {
      x=i;
      if(x%3==0)
        {
          printf(" %d",i);
        }
      else
        {
          for(;;)
            {
              if(x%10==3)
                {
                  printf(" %d",i);
                  break;
                }
              x/=10;
              if(x) continue;
              else break;
            }
        }
      if(++i<=n) continue;
      else break;
    }
}
