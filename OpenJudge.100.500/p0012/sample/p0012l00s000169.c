#include<stdio.h>

int main(void)
{
  int n,idx=0;
  int data[100];
  while(1)
  {
    scanf("%d",&n);
    if(idx==0 && n==0) break;

    else if(n==0)
    {
      idx-=1;
      printf("%d\n",data[idx]);

    }

    else
    {
      data[idx]=n;
      idx+=1;
    }
  }
}