#include<stdio.h>
int main()
{
    int N,A,B,T;
    scanf("%d%d%d",&N,&A,&B);
    if(1<=N&&N<=20&&1<=A&&A<=50&&1<=B&&B<=50)
    {
        T=N*A;
        if(T<B)
        {
            printf("%d\n",T);
        }
        else if(T>B)
        {
            printf("%d\n",B);
        }
    }
    return 0;

}