#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,n,i,j,f;
   scanf("%d",&N);
   for(i=1;i<10;i++)
    {
     for(j=1;j<i+1;j++)
      {
       n=i*j;
       if(N==n)
        f=1;
       if(N!=n)
       f=0;
      }
    }
    if(f=1) printf("Yes");
    if(f=0) printf("No");
}