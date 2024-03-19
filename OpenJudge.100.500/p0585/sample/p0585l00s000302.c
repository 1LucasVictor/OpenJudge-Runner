#include<stdio.h>
int main()
{
    int A;
    int B;
    int T;
    int F;


    scanf("%d %d %d", &A, &B, &T);
    F = (T+0.5) / A;
    if(A > 2*((T+0.5)/3) ){
        printf("0 \n");
        }else{
        printf("%d",F * B);
        }
        return 0;
    }