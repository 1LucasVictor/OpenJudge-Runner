#include<stdio.h>
#include<stdlib.h>
int mul(int *A,int *B)
{
    if((*A>=1&&*A<=9)&&(*B>=1&&*B<=9))
    return (*A)*(*B);
    else
    return -1;
}
int main()
{
   int A=0,B=0;
   scanf("%d %d",&A,&B);
   int res=mul(&A,&B);
   printf("\n%d",res);
   return 0;
}
  