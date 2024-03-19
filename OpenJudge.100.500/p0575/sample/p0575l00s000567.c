#include <stdio.h>

int main(void)
{
    int X,A;

    scanf("%d",&X);
    scanf("%d",&A);

    if(A>X){
        printf("0\n");
    }else if(X>A){
        printf("10\n");
    }else if(X==A){
        printf("10\n");
    }

    return 0;
}
