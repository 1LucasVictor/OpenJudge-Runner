#include<stdio.h>
int main()
{
    int A;
    int B;
    int T;
    int C;
    int D;
    int E;
    int F;


    scanf("%d %d %d", &A, &B, &T);
    C = (T+0.5)/3;
    D = 2*C;
    E = T+0.5;
    F = E / A;
    if(A > D ){
        printf("0 \n");
        }else{
        printf("%d",F * B);
        }
    }