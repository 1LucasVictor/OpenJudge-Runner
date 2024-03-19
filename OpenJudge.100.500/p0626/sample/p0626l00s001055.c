#include <stdio.h>
int main()
{
  int D,N;
  scanf("%d",&D);//0,1,2

  scanf("%d",&N);//1以上100以下
  int han=100;//100
  int i;
  if(D==0)
  {
    for(i=1;i<100;i++)
    {
      if(i==N)
      {
        printf("%d",i);
      }
    }
  }
  if(D==1)
  {
    for(i=1;i<10000;i++)
    {
      int n;
      n=i*100;
      if(n==N*100)
      {
        printf("%d",n);
      }
    }
  }
  if(D==2)
  {
    for(i=1;i<1000000;i++)
    {
      int n;
      n=i*10000;
      if(n==N*10000)
      {
        printf("%d",n);
      }
    }
  }
}
