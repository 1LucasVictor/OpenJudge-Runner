#include<stdio.h>
int main()
{
    int N,i,flag;
    scanf("%d",&N);
    int A[N];
    for(i=0;i<N;i++)
    {
    scanf("%d",&A[i]);
    if(A[i]%2==0)
    {
      if(A[i]%3==0|| A[i]%5==0)
      {
          flag=1;
      }
      else
      {
          flag=0;
          break;
      }
    }
    }
    if(flag==1)
        printf("APPROVED\n");
    else
        printf("DENIED\n");
    return(0);
}
