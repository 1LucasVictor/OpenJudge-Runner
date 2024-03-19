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
    if(A < 1 || A > 20){
            scanf("%d %d %d", &A, &B, &T);
        }
    if(B < 1 || B > 20){
            scanf("%d %d %d", &A, &B, &T);
        }
    if(T < 1 || T > 20){
            scanf("%d %d %d", &A, &B, &T);
        }
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