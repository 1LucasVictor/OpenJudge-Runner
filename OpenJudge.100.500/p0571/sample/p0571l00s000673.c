#include<stdio.h>

int main()
{
    int A,B,N;
    scanf("%d %d %d",&N,&A,&B);
   if(A<B)
    {
    printf("%d\n",N*A);
    }
    else{
        printf("%d\n",N*B);
    }
    return 0;
}