#include <stdio.h>

int main()
{
    int A,B,M;
    scanf("%d%d",&A,&B);
    if(A >= 1 && B<=9){
        M=A*B;
        printf("%d",M);
    }
    else
    {
        printf("-1");
    }
    return 0;
}
