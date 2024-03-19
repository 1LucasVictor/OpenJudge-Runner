#include<stdio.h>
int main()
{
    int K,A,B,i,c=0;
     scanf("%d%d%d",&K,&A,&B);
      for(i=A;i<=B;i++)
      {
          if(i%K==0)
            c++;

      }
      if(c>0)
        printf("OK\n");
      else
        printf("NG\n");


    return 0;
}


