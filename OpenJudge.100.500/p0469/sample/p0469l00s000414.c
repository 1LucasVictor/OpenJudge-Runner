#include<stdio.h>

int main()
{
    int K,A,B,i,flag=0;
    scanf("%d %d %d",&K,&A,&B);
    for(i=A;i<=B;i++)
    {
      if(i%K == 0)
      {
        flag=1;
        break;
      }
    }
    if(flag == 1)
    {
      printf("OK\n");
    }
    else
    {
      printf("NG\n");
    }
    return 0;
}