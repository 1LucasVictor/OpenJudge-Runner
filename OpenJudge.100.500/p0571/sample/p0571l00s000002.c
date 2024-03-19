#include<stdio.h>
int main()
{ int N,A,B;
  scanf("%d%d%d",&N,&A,&B);
  if(N*A>B)
   printf("%d",B);
  else
    printf("%d",N*A);
    return 0;
    }