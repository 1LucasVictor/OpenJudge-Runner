#include"stdio.h"
#include"math.h"

int cls(int);

int main()
{
  int n;
  int p;
  int i;
  int num=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      scanf("%d",&p);
      num+=cls(p);
    }
  printf("%d\n",num);
    return 0;
}

int cls(int n)
{
  int num=(int)sqrt(n);
  int i;
  for(i=2;i<=num;i++)
    {
      if(n%i==0)return 0;
    }
  return 1;
}
