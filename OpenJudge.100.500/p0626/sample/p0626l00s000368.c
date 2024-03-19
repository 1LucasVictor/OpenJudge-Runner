#include<stdio.h>

int main()
{
  int i,n,d,no;
  while(scanf("%d %d",&d,&n)==2)
  {
    if(d==0)
    {
      if(n==100)
      {
        printf("101\n");
      }
      else
      {
        printf("%d\n",n);
      }
    }
    else
    {
     if(d==1)
     {
       printf("%d\n",n*100);
     }
     else
     {
       printf("%d\n",n*10000);
     }
    }
  }

  return 0;
}
