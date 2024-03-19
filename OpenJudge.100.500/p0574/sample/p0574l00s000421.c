#include <stdio.h>
int main(void)
{
    int S,A,B,C,D;
    scanf("%d",&S);
    A = S/1000;
    B = S/100-A*10;
    C = S/10-A*100-B*10;
    D = S%10;
    if(A == B || B == C || C == D){
        printf("Bad");
    }else{
        printf("Good");
    }
}