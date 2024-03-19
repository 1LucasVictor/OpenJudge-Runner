#include<stdio.h>
        int main(void)
{
        int A,B,S,N;
        scanf("%d%d", &A,&B);
        N = B % A;
         if(N == 0) S = A + B;
          else  S = B - A;
         printf("%d",S);
        return 0;
}
