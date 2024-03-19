#include<stdio.h>
int main()
{
    int A,B,T,C,E;
    scanf("%d %d %d",&A,&B,&T);
    if(1<=A&&A<=20&&1<=B&&B<=20&&1<=B&&B<=20)
    {
        C=(T+.5)/A;
        E=B*C;
        printf("%d",E);
    }
    return 0;
}
