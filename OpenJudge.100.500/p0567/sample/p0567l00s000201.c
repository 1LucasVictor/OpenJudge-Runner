#include <stdio.h>
int main(void)
{
    int A,B,C;
    scanf("%d%d%d",&A,&B,&C);

    int D = A-B;
    int E = C-D;

    if(E <= 0){
        printf("%d\n", 0);
    }

    if(0 < E){
        printf("%d\n", E);
    }

    return 0;
}