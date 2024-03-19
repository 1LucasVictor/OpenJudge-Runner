#include <stdio.h>
int main()
{
    int X,A;
    scanf("%d",&X);
    scanf("%d",&A);

    if((X>=0)&&(A<=9)){
        if(X<A){
            printf("0\n");
        }
        if(X>A){
            printf("1\n");
        }
    }
    return 0;
}
